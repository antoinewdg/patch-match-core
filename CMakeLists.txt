cmake_minimum_required(VERSION 2.8)
project(patch_match)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")

set(SOURCE_FILES
        include/patch_match_core/patch_matcher.h
        )

set(TEST_FILES
        test/dummies/patch_servers.h
        test/dummies/structs.h
        test/dummies/dummy_iterator.h
        test/dummies/distance.h
        test/dummies/maps.h
        test/patch_match_core/test_patch_matcher.cpp
        )


include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${CMAKE_CURRENT_SOURCE_DIR}/lib
        ${CMAKE_CURRENT_SOURCE_DIR}/test
)


add_executable(run_tests test/main.cpp ${SOURCE_FILES} ${TEST_FILES})


# Boost
find_package(Boost 1.36.0 REQUIRED)
if (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
endif ()


TARGET_LINK_LIBRARIES(run_tests ${TARGET_LIBS})