cmake_minimum_required(VERSION 2.6)

project(MaSousBibliotheque)

add_library(MaSousBibliotheque SHARED MaSousClasse.cpp)

target_link_libraries(MaSousBibliotheque MaBibliotheque)

include_directories("../MaBibliotheque")

install(TARGETS MaSousBibliotheque DESTINATION lib)
install(FILES MaSousClasse.h DESTINATION include/MaSousBibliotheque)
