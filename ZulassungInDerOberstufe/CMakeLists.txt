cmake_minimum_required(VERSION 3.5)

project(ZulassungInDerOberstufe LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ZulassungInDerOberstufe main.cpp)

install(TARGETS ZulassungInDerOberstufe
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
