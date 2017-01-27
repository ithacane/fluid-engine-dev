// Copyright (c) 2017 Doyub Kim

#include <jet/jet.h>
#include <pybind11/pybind11.h>

using namespace jet;
namespace py = pybind11;

class FlipSolverBuilder3_;

class FlipSolver3_ : public FlipSolver3 {
 public:
    FlipSolver3_() {}

    FlipSolver3_(
        const py::tuple& resolution_,
        const py::tuple& gridSpacing_,
        const py::tuple& gridOrigin_)
    : FlipSolver3(
        Size3(
            resolution_[0].cast<size_t>(),
            resolution_[1].cast<size_t>(),
            resolution_[2].cast<size_t>()),
        Vector3D(
            gridSpacing_[0].cast<double>(),
            gridSpacing_[1].cast<double>(),
            gridSpacing_[2].cast<double>()),
        Vector3D(
            gridOrigin_[0].cast<double>(),
            gridOrigin_[1].cast<double>(),
            gridOrigin_[2].cast<double>())) {}

    void update_(const Frame& frame) {
        update(frame);
    }

    static FlipSolverBuilder3_ builder();
};

typedef std::shared_ptr<FlipSolver3_> FlipSolver3Ptr_;

class FlipSolverBuilder3_ {
 public:
    FlipSolverBuilder3_& withResolution(const py::tuple& resolution) {
        _resolution = resolution;
        return *this;
    }

    FlipSolverBuilder3_& withGridSpacing(const py::tuple& gridSpacing) {
        _gridSpacing = gridSpacing;
        return *this;
    }

    FlipSolverBuilder3_& withOrigin(const py::tuple& gridOrigin) {
        _gridOrigin = gridOrigin;
        return *this;
    }

    FlipSolver3Ptr_ build() const {
        return std::make_shared<FlipSolver3_>(
            _resolution,
            _gridSpacing,
            _gridOrigin);
    }

 private:
    py::tuple _resolution;
    py::tuple _gridSpacing;
    py::tuple _gridOrigin;
};

FlipSolverBuilder3_ FlipSolver3_::builder() {
    return FlipSolverBuilder3_();
}

PYBIND11_PLUGIN(pyjet) {
    py::module m("pyjet", "Python binding for Jet fluid simulation engine");

    py::class_<Logging>(m, "Logging")
        .def_static("mute", &Logging::mute);

    py::class_<Frame>(m, "Frame")
        .def(
            py::init<unsigned int, double>(),
            py::arg("index") = 0, py::arg("timeIntervalInSeconds") = 1.0/60.0)
        .def_readwrite("index", &Frame::index)
        .def_readwrite("timeIntervalInSeconds", &Frame::timeIntervalInSeconds)
        .def("timeInSeconds", &Frame::timeInSeconds);

    py::class_<FlipSolverBuilder3_>(m, "FlipSolverBuilder3_")
        .def("withResolution", &FlipSolverBuilder3_::withResolution)
        .def("withGridSpacing", &FlipSolverBuilder3_::withGridSpacing)
        .def("withOrigin", &FlipSolverBuilder3_::withOrigin)
        .def("build", &FlipSolverBuilder3_::build);

    py::class_<FlipSolver3_, FlipSolver3Ptr_>(m, "FlipSolver3")
        .def(py::init<const py::tuple&, const py::tuple&, const py::tuple&>())
        .def("update", &FlipSolver3_::update_)
        .def_static("builder", &FlipSolver3_::builder);

    return m.ptr();
}
