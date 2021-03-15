cmake_minimum_required(VERSION 2.6)

project(MaBibliotheque)

add_library(MaBibliotheque SHARED MaClasse.cpp)

target_include_directories(MaBibliotheque PUBLIC ${CMAKE_SOURCE_DIR})

install(TARGETS MaBibliotheque DESTINATION lib)
install(FILES MaClasse.h DESTINATION include/MonProjet/MaBibliotheque)
