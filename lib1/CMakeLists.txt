set(LIB1_SOURCE_FILES
    src/common.cpp
)

add_library(lib1 STATIC ${LIB1_SOURCE_FILES})

target_include_directories(lib1
    PUBLIC
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
	$<INSTALL_INTERFACE:include>
    PRIVATE
	src
)

set_target_properties(lib1 PROPERTIES POSITION_INDEPENDENT_CODE ON)

INSTALL(TARGETS lib1
	EXPORT lib1Targets
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
	
INSTALL(DIRECTORY include/
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

# Make the project importable from build directory
EXPORT(TARGETS lib1 FILE lib1Config.cmake)

if (BUILD_TESTS)
    add_subdirectory(test)
endif()
