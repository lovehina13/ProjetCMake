cmake_minimum_required(VERSION 2.6)

project(MonExecutable)

add_executable(MonExecutable ProjetCMake.cpp)

target_link_libraries(MonExecutable MaBibliotheque)

include_directories("../MaBibliotheque")

install(TARGETS MonExecutable DESTINATION bin)
