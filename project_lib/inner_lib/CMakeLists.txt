cmake_minimum_required(VERSION 2.8)

set(CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic -Wall")

file(GLOB additional_lib *.cpp
                      *.hpp)

# add_subdirectory(inner_library)

add_library(additional_lib STATIC
    ${additional_lib}
)

target_include_directories(additional_lib PUBLIC
    ${PROJECT_SOURCE_DIR}/project_lib
)
