cmake_minimum_required(VERSION 2.6)

project(MaSousBibliotheque)

add_library(MaSousBibliotheque SHARED MaSousClasse.cpp)

target_link_libraries(MaSousBibliotheque PUBLIC MaBibliotheque)

target_include_directories(MaSousBibliotheque PUBLIC ${CMAKE_SOURCE_DIR})

install(TARGETS MaSousBibliotheque DESTINATION lib)
install(FILES MaSousClasse.h DESTINATION include/MonProjet/MaSousBibliotheque)
