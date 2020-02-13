cmake_minimum_required(VERSION 2.6)

project(MonExecutable)

add_executable(MonExecutable MonExecutable.cpp)

target_link_libraries(MonExecutable PUBLIC MaBibliotheque MaSousBibliotheque)

target_include_directories(MonExecutable PUBLIC ${CMAKE_SOURCE_DIR}/MaBibliotheque ${CMAKE_SOURCE_DIR}/MaSousBibliotheque)

install(TARGETS MonExecutable DESTINATION bin)
