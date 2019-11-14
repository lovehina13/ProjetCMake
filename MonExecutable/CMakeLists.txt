cmake_minimum_required(VERSION 2.6)

project(MonExecutable)

add_executable(MonExecutable MonExecutable.cpp)

target_link_libraries(MonExecutable MaBibliotheque)
target_link_libraries(MonExecutable MaSousBibliotheque)

include_directories("../MaBibliotheque")
include_directories("../MaSousBibliotheque")

install(TARGETS MonExecutable DESTINATION bin)
