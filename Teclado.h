

#ifndef PROYECTO1PROGRA2_TECLADO_H
#define PROYECTO1PROGRA2_TECLADO_H
#include "DecoradorEquipo.h"
#include <string>
#include "EquipoGeneral.h"
#include "Incidencia.h"
#include "Computadora.h"
#include <sstream>
#include <iostream>
using namespace std;

class Teclado {
public:
    Teclado(EquipoGeneral* d): DecoradorEquipo(d) {}

    string descripcion() const override {
        return decoracion->descripcion() + " + teclado";
    }

    string aplicarMantenimiento() override {
        DecoradorEquipo::aplicarMantenimiento();
        estado += 2;
        if (estado > 100) {
            estado = 100;
        }
    }
};


#endif //PROYECTO1PROGRA2_TECLADO_H