cmake_minimum_required(VERSION 3.10)
project(json_c C)

set(CMAKE_C_STANDARD 99)

add_executable(json_c src/main.c src/json.c)
find_library(CJSON_LIB cjson)
target_link_libraries(json_c ${CJSON_LIB})
