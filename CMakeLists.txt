add_library(
    functions
    functions.h
    functions.c
)

add_executable(program main.c)

target_link_libraries(program PRIVATE functions)

