set(app1_UNIT_TEST_SRC_FILES
    ${app1_SOURCE_FILES}
    main.cpp
    sample_test.cpp
)    

add_executable(app1UnitTest ${app1_UNIT_TEST_SRC_FILES})

set_target_properties(app1UnitTest PROPERTIES OUTPUT_NAME App1UnitTests)

add_test(
    NAME app1UnitTest
    COMMAND app1UnitTest
)
add_dependencies(app1UnitTest gtest app1)
target_link_libraries(app1UnitTest gtest pthread lib1)
target_include_directories(app1UnitTest PRIVATE ${app1_INCLUDE_DIR} ${GTEST_INCLUDE_DIRS})


INSTALL(TARGETS app1UnitTest DESTINATION unit )

