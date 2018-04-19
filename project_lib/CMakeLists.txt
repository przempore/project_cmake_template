cmake_minimum_required(VERSION 2.8)

set(CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic -Wall")

file(GLOB project_src *.cpp
                      *.hpp)

# add_subdirectory(inner_library)

add_library(project_lib STATIC
    ${project_src}
)

target_include_directories(project_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    # ${CMAKE_CURRENT_SOURCE_DIR}/inner_library
)
