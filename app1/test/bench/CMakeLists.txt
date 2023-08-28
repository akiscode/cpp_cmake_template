set(app1_BENCH_SRC_FILES
    ${app1_SOURCE_FILES}
    sample_bench.cpp
)

add_executable(app1Bench ${app1_BENCH_SRC_FILES})

set_target_properties(app1Bench PROPERTIES OUTPUT_NAME App1Bench)

add_dependencies(app1Bench hayai app1)
target_link_libraries(app1Bench hayai pthread lib1)
target_include_directories(app1Bench PRIVATE ${app1_INCLUDE_DIR} ${HAYAI_INCLUDE_DIRS})

INSTALL(TARGETS app1Bench DESTINATION bench )

