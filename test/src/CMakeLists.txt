set(CXX_STANDARD 17)

file(GLOB SRC *.cpp
              *.hpp)

add_executable(test_src ${SRC})

target_link_libraries(test_src
    libgtest
    libgmock
    project_lib
)

install(TARGETS test_src DESTINATION bin)
# file(COPY ${project_name_SOURCE_DIR}/example DESTINATION ${project_name_BINARY_DIR}/main)
