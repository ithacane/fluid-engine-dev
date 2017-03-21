// Copyright (c) 2017 Doyub Kim

#ifndef SRC_TESTS_UNIT_TESTS_UNIT_TESTS_UTILS_H_
#define SRC_TESTS_UNIT_TESTS_UNIT_TESTS_UTILS_H_

#include <jet/vector3.h>
#include <gtest/gtest.h>

#define EXPECT_VECTOR2_EQ(expected, actual) \
    EXPECT_DOUBLE_EQ(expected.x, actual.x); \
    EXPECT_DOUBLE_EQ(expected.y, actual.y); \

#define EXPECT_VECTOR2_NEAR(expected, actual, eps) \
    EXPECT_NEAR(expected.x, actual.x, eps); \
    EXPECT_NEAR(expected.y, actual.y, eps); \

#define EXPECT_VECTOR3_EQ(expected, actual) \
    EXPECT_DOUBLE_EQ(expected.x, actual.x); \
    EXPECT_DOUBLE_EQ(expected.y, actual.y); \
    EXPECT_DOUBLE_EQ(expected.z, actual.z); \

#define EXPECT_VECTOR3_NEAR(expected, actual, eps) \
    EXPECT_NEAR(expected.x, actual.x, eps); \
    EXPECT_NEAR(expected.y, actual.y, eps); \
    EXPECT_NEAR(expected.z, actual.z, eps); \

#define EXPECT_VECTOR4_EQ(expected, actual) \
    EXPECT_DOUBLE_EQ(expected.x, actual.x); \
    EXPECT_DOUBLE_EQ(expected.y, actual.y); \
    EXPECT_DOUBLE_EQ(expected.z, actual.z); \
    EXPECT_DOUBLE_EQ(expected.w, actual.w); \

#define EXPECT_VECTOR4_NEAR(expected, actual, eps) \
    EXPECT_NEAR(expected.x, actual.x, eps); \
    EXPECT_NEAR(expected.y, actual.y, eps); \
    EXPECT_NEAR(expected.z, actual.z, eps); \
    EXPECT_NEAR(expected.w, actual.w, eps); \

#define EXPECT_BOUNDING_BOX2_EQ(expected, actual) \
    EXPECT_VECTOR2_EQ(expected.lowerCorner, actual.lowerCorner); \
    EXPECT_VECTOR2_EQ(expected.upperCorner, actual.upperCorner); \

#define EXPECT_BOUNDING_BOX2_NEAR(expected, actual, eps) \
    EXPECT_VECTOR2_NEAR(expected.lowerCorner, actual.lowerCorner, eps); \
    EXPECT_VECTOR2_NEAR(expected.upperCorner, actual.upperCorner, eps); \

#define EXPECT_BOUNDING_BOX3_EQ(expected, actual) \
    EXPECT_VECTOR3_EQ(expected.lowerCorner, actual.lowerCorner); \
    EXPECT_VECTOR3_EQ(expected.upperCorner, actual.upperCorner); \

#define EXPECT_BOUNDING_BOX3_NEAR(expected, actual, eps) \
    EXPECT_VECTOR3_NEAR(expected.lowerCorner, actual.lowerCorner, eps); \
    EXPECT_VECTOR3_NEAR(expected.upperCorner, actual.upperCorner, eps); \

namespace jet {

const Vector2D kSamplePoints2[] = {
    {0.345361, 0.379616},
    {0.689684, 0.981134},
    {0.178295, 0.775100},
    {0.016982, 0.948684},
    {0.716177, 0.657466},
    {0.392409, 0.098665},
    {0.059524, 0.088721},
    {0.567570, 0.352076},
    {0.047863, 0.901897},
    {0.712245, 0.502281},
    {0.437343, 0.607144},
    {0.109745, 0.621235},
    {0.096203, 0.365931},
    {0.842683, 0.418980},
    {0.751143, 0.166908},
    {0.124889, 0.026507},
    {0.663767, 0.196349},
    {0.656994, 0.257587},
    {0.283738, 0.442652},
    {0.421362, 0.263528},
    {0.889199, 0.812583},
    {0.513579, 0.882426},
    {0.116088, 0.187651},
    {0.408908, 0.540011},
    {0.479765, 0.427906},
    {0.916287, 0.699123},
    {0.810567, 0.455548},
    {0.633501, 0.722117},
    {0.869039, 0.879401},
    {0.634359, 0.656880},
    {0.881239, 0.928651},
    {0.192255, 0.782989},
    {0.143437, 0.040834},
    {0.811243, 0.580179},
    {0.323126, 0.347108},
    {0.821038, 0.591176},
    {0.874554, 0.746953},
    {0.747251, 0.493964},
    {0.698499, 0.790584},
    {0.451200, 0.175852},
    {0.394435, 0.170139},
    {0.575606, 0.139201},
    {0.519766, 0.637931},
    {0.897444, 0.818441},
    {0.660771, 0.763253},
    {0.210160, 0.702209},
    {0.411656, 0.338267},
    {0.560503, 0.445439},
    {0.669966, 0.767095},
    {0.687153, 0.991888},
    {0.215029, 0.115820},
    {0.666109, 0.881175},
    {0.122334, 0.603771},
    {0.275602, 0.970806},
    {0.572030, 0.277108},
    {0.666184, 0.761624},
    {0.184890, 0.685102},
    {0.196658, 0.770965},
    {0.652366, 0.135286},
    {0.416088, 0.773534},
    {0.350510, 0.739229},
    {0.602128, 0.603852},
    {0.932349, 0.114926},
    {0.109750, 0.507729},
    {0.305887, 0.921879},
    {0.373499, 0.295627},
    {0.948411, 0.127778},
    {0.997719, 0.308245},
    {0.939498, 0.884958},
    {0.958866, 0.208753},
    {0.658005, 0.811717},
    {0.337530, 0.183797},
    {0.102327, 0.600194},
    {0.252880, 0.466689},
    {0.024216, 0.013599},
    {0.712552, 0.134843},
    {0.135397, 0.302475},
    {0.312750, 0.598819},
    {0.852396, 0.657736},
    {0.942883, 0.155169},
    {0.021386, 0.650356},
    {0.440839, 0.593921},
    {0.524037, 0.412471},
    {0.953303, 0.404403},
    {0.706313, 0.116943},
    {0.986237, 0.273937},
    {0.463267, 0.861108},
    {0.441331, 0.039794},
    {0.816625, 0.360040},
    {0.612656, 0.117950},
    {0.971704, 0.547998},
    {0.425068, 0.915426},
    {0.242974, 0.237278},
    {0.184436, 0.911548},
    {0.847674, 0.444267},
    {0.003595, 0.302114},
    {0.448335, 0.006152},
    {0.417010, 0.954228},
    {0.465312, 0.154684},
    {0.797367, 0.573884}
};

const Vector2D kSampleDirs2[] = {
    {-0.834837, -0.550497},
    {-0.631745, 0.775177},
    {-0.123673, -0.992323},
    {0.461529, 0.887125},
    {0.827792, 0.561035},
    {0.099221, -0.995065},
    {0.362386, -0.932028},
    {-0.943357, 0.331780},
    {0.125962, -0.992035},
    {-0.611567, 0.791193},
    {0.783917, -0.620866},
    {0.928452, -0.371452},
    {0.999132, -0.041662},
    {0.988302, 0.152510},
    {0.164164, -0.986433},
    {1.000000, 0.000606},
    {-0.864073, -0.503367},
    {-0.234965, -0.972004},
    {0.830583, -0.556895},
    {0.847955, 0.530068},
    {0.984571, 0.174987},
    {-0.464266, 0.885696},
    {0.201224, -0.979545},
    {0.883430, 0.468563},
    {0.900634, 0.434578},
    {-0.958385, -0.285481},
    {-0.839971, 0.542632},
    {0.973045, -0.230616},
    {-0.859217, -0.511611},
    {0.990658, 0.136368},
    {0.060143, 0.998190},
    {0.087498, -0.996165},
    {0.998413, 0.056323},
    {0.393290, 0.919414},
    {0.750650, 0.660700},
    {0.711934, -0.702246},
    {0.987396, -0.158268},
    {-0.961487, 0.274851},
    {0.960084, 0.279713},
    {0.842703, 0.538379},
    {0.291245, -0.956649},
    {0.653652, -0.756795},
    {0.805878, 0.592082},
    {0.194257, -0.980951},
    {0.114234, -0.993454},
    {-0.621933, 0.783071},
    {-0.993070, -0.117521},
    {0.991110, 0.133047},
    {0.991560, -0.129646},
    {-0.901704, -0.432355},
    {0.959840, 0.280549},
    {0.809570, -0.587024},
    {-0.512569, 0.858646},
    {0.990664, -0.136327},
    {0.695819, -0.718217},
    {-0.878328, 0.478059},
    {0.907827, -0.419344},
    {0.696731, 0.717333},
    {-0.730065, -0.683378},
    {-0.608621, 0.793461},
    {-0.985353, -0.170529},
    {0.785365, -0.619033},
    {-0.656787, -0.754076},
    {-0.596506, -0.802609},
    {-0.651835, -0.758361},
    {0.723279, -0.690556},
    {0.589656, 0.807655},
    {0.724230, 0.689559},
    {0.933769, -0.357876},
    {0.999843, -0.017728},
    {-0.540588, 0.841287},
    {-0.766218, -0.642581},
    {-0.262458, 0.964943},
    {-0.934809, -0.355152},
    {-0.446191, -0.894938},
    {0.986583, -0.163262},
    {-0.995628, 0.093407},
    {0.050012, -0.998749},
    {-0.494582, 0.869131},
    {0.682014, 0.731339},
    {0.834163, 0.551518},
    {0.554322, 0.832302},
    {0.878926, 0.476958},
    {-0.748926, 0.662654},
    {-0.578204, -0.815892},
    {0.413582, -0.910467},
    {0.460255, -0.887787},
    {-0.664631, 0.747172},
    {0.561924, -0.827189},
    {-0.957942, -0.286962},
    {0.486858, 0.873481},
    {-0.710029, -0.704172},
    {0.706389, -0.707823},
    {0.371374, 0.928483},
    {0.552099, 0.833779},
    {0.221655, -0.975125},
    {-0.938927, -0.344118},
    {0.421843, 0.906669},
    {0.520394, 0.853926},
    {0.817585, -0.575807}
};

const Vector3D kSamplePoints3[] = {
    {0.497400, 0.340319, 0.174018},
    {0.345847, 0.671895, 0.770077},
    {0.824750, 0.832587, 0.337455},
    {0.788730, 0.938434, 0.392927},
    {0.262384, 0.063295, 0.481592},
    {0.137059, 0.340083, 0.780170},
    {0.410246, 0.356760, 0.271641},
    {0.258869, 0.499761, 0.714568},
    {0.960643, 0.896457, 0.744053},
    {0.969492, 0.620965, 0.038201},
    {0.761103, 0.067140, 0.003153},
    {0.808669, 0.349383, 0.602196},
    {0.527798, 0.200637, 0.277750},
    {0.820000, 0.267404, 0.210669},
    {0.871385, 0.384953, 0.585981},
    {0.259116, 0.575521, 0.736410},
    {0.961039, 0.137049, 0.688318},
    {0.652596, 0.305719, 0.874114},
    {0.432216, 0.886638, 0.919146},
    {0.105440, 0.652642, 0.061559},
    {0.639214, 0.008707, 0.344644},
    {0.506621, 0.104165, 0.560967},
    {0.055950, 0.595481, 0.611841},
    {0.726020, 0.888253, 0.439209},
    {0.977397, 0.353103, 0.486040},
    {0.321141, 0.496627, 0.490141},
    {0.660194, 0.271911, 0.568495},
    {0.121249, 0.848909, 0.466652},
    {0.578311, 0.334937, 0.663786},
    {0.026048, 0.787703, 0.257295},
    {0.441405, 0.713241, 0.438669},
    {0.425619, 0.940345, 0.376602},
    {0.580785, 0.905464, 0.504882},
    {0.497568, 0.670469, 0.330681},
    {0.854962, 0.030817, 0.229460},
    {0.339229, 0.397792, 0.845276},
    {0.392889, 0.403645, 0.110404},
    {0.048508, 0.554204, 0.010991},
    {0.668386, 0.806681, 0.106063},
    {0.473332, 0.897396, 0.369129},
    {0.879946, 0.464546, 0.095410},
    {0.828294, 0.537904, 0.273714},
    {0.269106, 0.978606, 0.868892},
    {0.195268, 0.492400, 0.244056},
    {0.576959, 0.525732, 0.304788},
    {0.410733, 0.051802, 0.789971},
    {0.966585, 0.403823, 0.595742},
    {0.680305, 0.193207, 0.723708},
    {0.374682, 0.211646, 0.298336},
    {0.693784, 0.752065, 0.610412},
    {0.444658, 0.311000, 0.632398},
    {0.605686, 0.327283, 0.651981},
    {0.358708, 0.327774, 0.529254},
    {0.591066, 0.774619, 0.266842},
    {0.632197, 0.057545, 0.470357},
    {0.415280, 0.390888, 0.708106},
    {0.686436, 0.119143, 0.151267},
    {0.864336, 0.801096, 0.176234},
    {0.508921, 0.976984, 0.812028},
    {0.815223, 0.787772, 0.840940},
    {0.270436, 0.259103, 0.457229},
    {0.741541, 0.705125, 0.506695},
    {0.050869, 0.454618, 0.022979},
    {0.647166, 0.745158, 0.667532},
    {0.647613, 0.198647, 0.527858},
    {0.550523, 0.772316, 0.833556},
    {0.618357, 0.948876, 0.612774},
    {0.888236, 0.461945, 0.630564},
    {0.581529, 0.987256, 0.897477},
    {0.198041, 0.650353, 0.740811},
    {0.000253, 0.826019, 0.809284},
    {0.277294, 0.922714, 0.159235},
    {0.125245, 0.394914, 0.185451},
    {0.182339, 0.864938, 0.677111},
    {0.541744, 0.046790, 0.287032},
    {0.517508, 0.242606, 0.832993},
    {0.722396, 0.721982, 0.912246},
    {0.357276, 0.301075, 0.673499},
    {0.857920, 0.308104, 0.233233},
    {0.508702, 0.362859, 0.591321},
    {0.790020, 0.247796, 0.197567},
    {0.058633, 0.506554, 0.313645},
    {0.643169, 0.001582, 0.970613},
    {0.680016, 0.227724, 0.966055},
    {0.212052, 0.785980, 0.525420},
    {0.622927, 0.092216, 0.435965},
    {0.429010, 0.640716, 0.324353},
    {0.566219, 0.495695, 0.501004},
    {0.626306, 0.880628, 0.806723},
    {0.038548, 0.027644, 0.773834},
    {0.455215, 0.959835, 0.236123},
    {0.533056, 0.965158, 0.634343},
    {0.124713, 0.273837, 0.727391},
    {0.570217, 0.877730, 0.037296},
    {0.512131, 0.545868, 0.174878},
    {0.162331, 0.733906, 0.043851},
    {0.004506, 0.551064, 0.173766},
    {0.179539, 0.639458, 0.214501},
    {0.623272, 0.857292, 0.387644},
    {0.840032, 0.338341, 0.155947}
};

const Vector3D kSampleDirs3[] = {
    {-0.412626, 0.346615, 0.842376},
    {-0.159642, 0.702771, 0.693273},
    {0.626628, -0.656825, 0.419426},
    {0.546020, 0.709740, -0.445119},
    {0.463970, 0.711729, -0.527422},
    {-0.799261, -0.286253, -0.528434},
    {-0.426917, 0.737267, 0.523621},
    {-0.519358, 0.430140, -0.738408},
    {0.293382, 0.754417, -0.587181},
    {0.187069, 0.875009, -0.446503},
    {0.135364, -0.358041, 0.923841},
    {0.696725, 0.472670, -0.539590},
    {0.725969, 0.016815, -0.687522},
    {0.586766, 0.732091, -0.346047},
    {0.594526, -0.801264, 0.067189},
    {-0.135026, -0.485966, 0.863484},
    {-0.900620, 0.252128, -0.354000},
    {-0.651495, -0.561726, 0.509920},
    {0.631380, -0.461119, -0.623481},
    {0.668953, -0.657534, 0.346628},
    {-0.075516, -0.645187, 0.760284},
    {-0.554764, -0.370377, 0.745022},
    {-0.649783, 0.586463, -0.483573},
    {-0.817992, -0.158249, 0.553034},
    {-0.723074, 0.545119, -0.424276},
    {-0.183442, -0.551459, -0.813782},
    {-0.382321, -0.769024, 0.512281},
    {0.282039, -0.608147, 0.742032},
    {0.960025, -0.114449, -0.255446},
    {-0.284570, -0.916490, 0.281186},
    {-0.589486, 0.619899, 0.517911},
    {0.142000, -0.863406, 0.484114},
    {0.091577, -0.134608, 0.986658},
    {0.509412, -0.201465, -0.836607},
    {0.083146, 0.978916, 0.186573},
    {0.625844, -0.659236, 0.416806},
    {0.872060, -0.448630, -0.195556},
    {-0.999112, -0.042136, 0.000060},
    {-0.170327, 0.198389, 0.965210},
    {0.937792, -0.137543, 0.318792},
    {0.245423, -0.061242, 0.967480},
    {0.233324, -0.322487, 0.917367},
    {-0.055309, -0.740711, 0.669543},
    {-0.647869, -0.379706, 0.660371},
    {-0.667515, -0.694258, 0.269128},
    {0.115134, -0.736097, -0.667013},
    {0.365225, 0.707066, 0.605531},
    {-0.761231, -0.511205, -0.398994},
    {-0.668287, 0.455066, -0.588479},
    {-0.238968, 0.937489, 0.252999},
    {0.621444, 0.780138, 0.072056},
    {0.228231, 0.819871, -0.525092},
    {0.523007, -0.375250, -0.765279},
    {-0.924150, 0.178367, 0.337834},
    {0.339832, 0.510140, -0.790108},
    {0.601994, -0.208286, -0.770857},
    {0.316481, -0.918083, -0.238671},
    {0.777566, 0.015384, -0.628613},
    {0.275787, 0.957493, 0.084555},
    {-0.474831, -0.487453, 0.732752},
    {0.974242, -0.002691, 0.225489},
    {0.856188, 0.510533, -0.079366},
    {0.097690, 0.777224, 0.621595},
    {0.228268, -0.818331, -0.527473},
    {0.056570, 0.950774, -0.304678},
    {-0.579401, 0.771526, 0.262760},
    {-0.456913, 0.271317, -0.847123},
    {0.654652, -0.755685, -0.019258},
    {0.749825, 0.638450, 0.173622},
    {0.919134, 0.153333, -0.362879},
    {-0.059068, -0.063108, 0.996257},
    {0.637013, -0.761346, 0.120692},
    {-0.971146, -0.235058, -0.040281},
    {-0.887387, -0.379031, -0.262451},
    {-0.321031, -0.381300, 0.866920},
    {0.728688, -0.259951, -0.633592},
    {0.320396, -0.743341, 0.587188},
    {0.578361, 0.450433, -0.680153},
    {0.877732, 0.402931, 0.259295},
    {0.478574, 0.850736, 0.217292},
    {0.527917, 0.234938, -0.816154},
    {0.504137, 0.322646, 0.801090},
    {-0.586146, -0.620019, 0.521546},
    {0.677291, -0.420016, 0.604039},
    {-0.979604, 0.200903, -0.003732},
    {-0.682363, -0.184902, 0.707242},
    {-0.829199, 0.105079, 0.548988},
    {-0.525318, 0.785402, 0.327391},
    {-0.056204, -0.615759, -0.785927},
    {0.787225, 0.521508, -0.329099},
    {0.608854, -0.741327, 0.282369},
    {-0.675777, -0.671399, -0.304219},
    {0.533726, 0.677636, 0.505912},
    {-0.584978, 0.198362, 0.786418},
    {0.151476, -0.896765, -0.415774},
    {-0.562947, -0.770364, 0.299381},
    {-0.407004, -0.795582, 0.448773},
    {0.567580, 0.114354, 0.815338},
    {0.624382, -0.591191, 0.510530},
    {0.769309, -0.608519, 0.194597}
};

}  // namespace jet

#endif  // SRC_TESTS_UNIT_TESTS_UNIT_TESTS_UTILS_H_
