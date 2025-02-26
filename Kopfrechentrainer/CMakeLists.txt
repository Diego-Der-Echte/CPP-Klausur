cmake_minimum_required(VERSION 3.5)

project(Kopfrechentrainer LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Kopfrechentrainer main.cpp)

install(TARGETS Kopfrechentrainer
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
