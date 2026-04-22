//
// Created by pc1 on 21/4/2026.
//

#ifndef PROYECTO1PROGRA2_DECORADOREQUIPO_H
#define PROYECTO1PROGRA2_DECORADOREQUIPO_H
#include "EquipoGeneral.h"


class DecoradorEquipo : public EquipoGeneral {
    protected:
    EquipoGeneral* decoracion;

    public:
    DecoradorEquipo(EquipoGeneral* d): decoracion(d) {}
    virtual ~DecoradorEquipo(){ delete decoracion; }

};


#endif //PROYECTO1PROGRA2_DECORADOREQUIPO_H