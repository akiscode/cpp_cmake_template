set(LIB1_UNIT_TEST_SRC_FILES
    main.cpp
    sample_test.cpp
)    

enable_testing()

add_executable(lib1UnitTests ${LIB1_UNIT_TEST_SRC_FILES})

set_target_properties(lib1UnitTests PROPERTIES OUTPUT_NAME Lib1UnitTests)

add_test(
    NAME lib1UnitTests
    COMMAND Lib1UnitTests
)
add_dependencies(lib1UnitTests gtest lib1)
target_link_libraries(lib1UnitTests gtest lib1 pthread)
target_include_directories(lib1UnitTests PRIVATE ${GTEST_INCLUDE_DIRS})

INSTALL(TARGETS lib1UnitTests DESTINATION unit)

	
