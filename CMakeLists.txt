cmake_minimum_required(VERSION 3.30)
project(ArrayManipulation C)

set(CMAKE_C_STANDARD 23)

add_executable(ArrayManipulation main.c
        mechanism/bubble_sort.c
        mechanism/bubble_sort.h
        mechanism/search_remove_values.c
        mechanism/search_remove_values.h
        mechanism/max_min.c
        mechanism/max_min.h
        mechanism/basics.c
        mechanism/basics.h
)
