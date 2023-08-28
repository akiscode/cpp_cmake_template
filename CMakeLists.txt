cmake_minimum_required(VERSION 3.5)

project(SampleProject LANGUAGES CXX)

# Options

option(BUILD_TESTS "Build Tests" ON)
option(BUILD_BENCH "Build Benchmark Suite" ON)
option(BUILD_EXAMPLES "Build app1 and lib1" ON)
option(DEBUG_BUILD "Build in Debug" OFF)

# Project Info 

set(VERSION_MAJOR 0)
set(VERSION_MINOR 1)
set(VERSION_PATCH 0)
set(VERSION_STR "${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}")

# C++ Version
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# ---------------------------------------------------------

if (DEBUG_BUILD)
    set(CMAKE_BUILD_TYPE Debug)
else()
    set(CMAKE_BUILD_TYPE Release)
endif()

# Includes

include(GNUInstallDirs)
include(ExternalProject)
include(CPack)
include(CTest)

if (BUILD_TESTS)
    enable_testing()
    include(cmake/googletest.cmake)
endif()

if (BUILD_BENCH)
    include(cmake/hayai.cmake) 
endif()

# Setup Apps
if (BUILD_EXAMPLES)
    add_subdirectory(app1)
    add_subdirectory(lib1)
endif()

# Package Info
set(CPACK_PACKAGE_VERSION_MAJOR ${VERSION_MAJOR})
set(CPACK_PACKAGE_VERSION_MINOR ${VERSION_MINOR})
set(CPACK_PACKAGE_VERSION_PATCH ${VERSION_PATCH})

set(CPACK_PACKAGE_FILE_NAME "${PROJECT_NAME}-${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}-${CMAKE_SYSTEM_NAME}-${CMAKE_SYSTEM_VERSION}-${CMAKE_SYSTEM_PROCESSOR}")

