project(sdl_basic)
cmake_minimum_required(VERSION 3.10)

file(GLOB_RECURSE SRC "./src/*.*")

include_directories(
        /usr/include/SDL2
)

link_directories(
        /usr/lib/x86_64-linux-gnu
)

link_libraries(
        SDL2
)

add_executable(${PROJECT_NAME} ${SRC} src/main.cpp)
