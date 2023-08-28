set(lib1_BENCH_SRC_FILES
    sample_bench.cpp
)

add_executable(lib1Bench ${lib1_BENCH_SRC_FILES})

set_target_properties(lib1Bench PROPERTIES OUTPUT_NAME Lib1Bench)

add_dependencies(lib1Bench hayai )

target_link_libraries(lib1Bench hayai pthread lib1)
target_include_directories(lib1Bench PRIVATE ${HAYAI_INCLUDE_DIRS})

INSTALL(TARGETS lib1Bench DESTINATION bench )

