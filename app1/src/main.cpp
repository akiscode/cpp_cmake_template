#include "app1/common.hpp"
#include "lib1/common.hpp"

#include <iostream>

// Pass via CMake Compile Options
#ifndef VERSION_STR
    #define VERSION_STR 0.0.0
#endif

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)

int main(int , char ** ) 
{

    std::cout << "Version: " << TOSTRING(VERSION_STR) << std::endl;

    app1::test_func('s');

    lib1::test_func(28);

    return 0;
}
