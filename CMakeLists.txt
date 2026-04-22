cmake_minimum_required(VERSION 4.1)
project(Proyecto1Progra2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Proyecto1Progra2 main.cpp
        Computadora.cpp
        Computadora.h
        Incidencia.h
        Incidencia.cpp
        EquipoGeneral.cpp
        EquipoGeneral.h
        DecoradorEquipo.cpp
        DecoradorEquipo.h
        Mouse.cpp
        Mouse.h
        Teclado.cpp
        Teclado.h
)
