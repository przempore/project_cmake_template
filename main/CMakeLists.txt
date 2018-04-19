set(main_SRC
    main.cpp
)

set(CXX_STANDARD 17)

add_executable(project_app
    ${main_SRC}
)

target_include_directories(project_app PUBLIC
    ${PROJECT_SOURCE_DIR}/project_lib
    # ${PROJECT_SOURCE_DIR}/project_lib/inner_library
    )

target_link_libraries(project_app
    # inner_library
    project_lib
)

install(TARGETS project_app DESTINATION bin)
# file(COPY ${project_name_SOURCE_DIR}/example DESTINATION ${project_name_BINARY_DIR}/main)
