cmake_minimum_required(VERSION 3.5)

project(TageVonMonaten LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(TageVonMonaten main.cpp)

install(TARGETS TageVonMonaten
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
