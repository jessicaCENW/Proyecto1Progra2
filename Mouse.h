//
// Created by pc1 on 21/4/2026.
//

#ifndef PROYECTO1PROGRA2_MOUSE_H
#define PROYECTO1PROGRA2_MOUSE_H
#include "DecoradorEquipo.h"
#include <sstream>
using namespace std;


class Mouse : public DecoradorEquipo{
    public:
    Mouse(EquipoGeneral* d): DecoradorEquipo(d) {}
    string descripcion() const override {
        return decoracion->descripcion() + " + Mouse";
    }
};


#endif //PROYECTO1PROGRA2_MOUSE_H