cmake_minimum_required(VERSION 3.0.0)
project(ahorcado VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(ahorcado main.cpp funciones.cpp jugador.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
