# cpp-cmake-template
A repository that serves as a template for C++ projects that want to use modern CMake 

## Overview

**Contact:** <dev@akiscode.com>

A sample repository that serves as a starting point for C++ projects.  It contains a sample application ("app1") and a sample library ("lib1") that both have initial benchmark and testing fixtures setup.  

This also comes with a `.gitignore` file that ignores if the user creates a `build` directory in the root folder for CMake usage.

## Quick Start

Clone this repository, change into the directory and issue:

```
mkdir build
cd build
cmake ..
make
```

You can also issue `make test` and `make package` to run tests or package up the project respectively.

### Directory Layout

| Directory      | Description |
| ----------- | ----------- |
| `app1`      | Root folder of sample app       |
| `cmake`   | Location of "extra" cmake files        |
| `docs`   | Folder for any documentation |
| `lib1`   | Root folder of sample library |
| `scripts`   | Folder for any scripts |

Inside the sample app and library is the same directory structure:

```
├── CMakeLists.txt
├── include
│   └── app1
│       └── common.hpp
├── src
│   ├── common.cpp
│   └── main.cpp
└── test
    ├── bench
    │   ├── CMakeLists.txt
    │   └── sample_bench.cpp
    ├── CMakeLists.txt
    └── unit
        ├── CMakeLists.txt
        ├── main.cpp
        └── sample_test.cpp

```

Headers are located under the `include/(app1|lib1)` folder with corresponding source files under `src`. 

*There must always be a pair of source and header files with the exception of main.cpp*  

This is because the CMakeLists in the root of the app adds in source files only (which pulls in the header files).  `test` contains both the unit tests and benchmarks.  Either of which can be disabled by turning the corresponding CMake options off.


## License

This template is provided under the "Unlicense" License

---

This is free and unencumbered software released into the public domain.

Anyone is free to copy, modify, publish, use, compile, sell, or
distribute this software, either in source code form or as a compiled
binary, for any purpose, commercial or non-commercial, and by any
means.

In jurisdictions that recognize copyright laws, the author or authors
of this software dedicate any and all copyright interest in the
software to the public domain. We make this dedication for the benefit
of the public at large and to the detriment of our heirs and
successors. We intend this dedication to be an overt act of
relinquishment in perpetuity of all present and future rights to this
software under copyright law.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

For more information, please refer to <http://unlicense.org/>
