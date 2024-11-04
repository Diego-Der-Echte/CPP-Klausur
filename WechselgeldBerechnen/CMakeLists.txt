cmake_minimum_required(VERSION 3.5)

project(WechselgeldBerechnen LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(WechselgeldBerechnen main.cpp)

install(TARGETS WechselgeldBerechnen
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
