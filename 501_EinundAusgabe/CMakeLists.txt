cmake_minimum_required(VERSION 3.5)

project(501_EinundAusgabe LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(501_EinundAusgabe main.cpp)

install(TARGETS 501_EinundAusgabe
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
