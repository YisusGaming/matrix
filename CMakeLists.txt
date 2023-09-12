# I bet this is the smallest CMakeLists you'll ever see lol

cmake_minimum_required(VERSION 3.10)

project("C Matrix" VERSION 1.0)

add_library(rows src/rows.c)
add_executable(matrix src/main.c)

target_link_libraries(matrix PRIVATE rows)
