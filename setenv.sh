#!/usr/bin/env bash

# Copyright (c) 2017 Doyub Kim

unamestr=`uname`
if [[ "$unamestr" == 'Darwin' ]]; then
    export PYTHONPATH=`pwd`/obj/src/python:$PYTHONPATH
else
    export PYTHONPATH=`pwd`/obj/src/python:$PYTHONPATH
    ulimit -c 1000000000
fi
