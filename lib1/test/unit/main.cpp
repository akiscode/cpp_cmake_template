#include <stdio.h>
#include "gtest/gtest.h"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    printf("Running main() from gtest_main.cpp\n");
    return RUN_ALL_TESTS();
}

