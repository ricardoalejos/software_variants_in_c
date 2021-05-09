cmake_minimum_required(VERSION 3.16)

project(demo C)

include_directories(
    ${CMAKE_CURRENT_LIST_DIR}/library
    ${CMAKE_CURRENT_LIST_DIR}/application
)

add_library(
    library
    ${CMAKE_CURRENT_LIST_DIR}/library/library_implementation_1.c
    ${CMAKE_CURRENT_LIST_DIR}/library/library_implementation_2.c
)

add_executable(
    application
    ${CMAKE_CURRENT_LIST_DIR}/application/main.c
)

target_link_libraries(
    application
    library
)

target_compile_definitions(
    application
    PUBLIC
    LIBRARY_IMPLEMENTATION=${LIBRARY_IMPLEMENTATION}
)

install(
    TARGETS application
    DESTINATION bin
)
