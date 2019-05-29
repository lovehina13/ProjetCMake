cmake_minimum_required(VERSION 2.6)

project(MaBibliotheque)

add_library(MaBibliotheque MaClasse.cpp)

install(TARGETS MaBibliotheque DESTINATION lib)
install(FILES MaClasse.h DESTINATION include)
