cmake_minimum_required(VERSION 3.7)
project(ctest)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_definitions ("-Wall -Wextra -Wpedantic -Weffc++ -Wconversion -Wunreachable-code -Wold-style-cast -Wuninitialized")

set(SOURCES
        main.c
        square_root.h
        )

set(HEADERS
        square_root.h
        )

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
