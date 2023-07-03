cmake_minimum_required(VERSION 3.25)
project(wasmachine)

set(CMAKE_CXX_STANDARD 17)

add_executable(wasmachine main.cpp wasprogramma.cpp waterNiveauRegelaar.h waterNiveauRegelaar.cpp waterNiveauSensor.h waterNiveauSensor.cpp trommel.cpp verwarmingselement.h verwarmingselement.cpp)
