set(app1_SOURCE_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/src/common.cpp
)

add_executable(app1 src/main.cpp ${app1_SOURCE_FILES})

add_dependencies(app1 lib1)

# VERSION_STR is inherited from higher level CMake
target_compile_options(app1 PRIVATE -DVERSION_STR=${VERSION}) 

set(app1_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_include_directories(app1 PRIVATE ${app1_INCLUDE_DIR})

target_link_libraries(app1 lib1)

INSTALL(TARGETS app1
	EXPORT app1Targets
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	ARCHIVE DESTINATION ${CMAKE_INSTALL_BINDIR}
)

INSTALL(EXPORT app1Targets
	FILE app1Targets.cmake
	NAMESPACE app1::
	DESTINATION lib/cmake/app1
)

if (BUILD_TESTS)
    add_subdirectory(test)
endif()
