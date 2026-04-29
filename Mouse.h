

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
    void aplicarMantenimiento() override {
        DecoradorEquipo::aplicarMantenimiento();
        estado += 2;
        if (estado > 100) {
            estado = 100;
        }
    }
};


#endif //PROYECTO1PROGRA2_MOUSE_H