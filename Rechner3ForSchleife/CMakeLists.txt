cmake_minimum_required(VERSION 3.5)

project(Rechner3ForSchleife LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Rechner3ForSchleife main.cpp)

install(TARGETS Rechner3ForSchleife
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
