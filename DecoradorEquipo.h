

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