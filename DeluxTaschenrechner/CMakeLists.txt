cmake_minimum_required(VERSION 3.5)

project(DeluxTaschenrechner LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(DeluxTaschenrechner main.cpp)

install(TARGETS DeluxTaschenrechner
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
