cmake_minimum_required(VERSION 3.25)
project(Spisok C)

set(CMAKE_C_STANDARD 23)

add_executable(Spisok src/main.c src/init.c src/sizing.c includes/list.h includes/sizing.h src/check.c includes/check.h src/delete.c includes/delete.h src/insert.c includes/insert.h includes/init.h src/show.c includes/show.h src/clone.c includes/clone.h)
