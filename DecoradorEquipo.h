

#ifndef PROYECTO1PROGRA2_DECORADOREQUIPO_H
#define PROYECTO1PROGRA2_DECORADOREQUIPO_H
#include "EquipoGeneral.h"


class DecoradorEquipo : public EquipoGeneral {
    protected:
    EquipoGeneral* decoracion;

    public:
    DecoradorEquipo(EquipoGeneral* d):EquipoGeneral(d->getId(), d->getCriticidad(), d->getEstado()), decoracion(d){}
    virtual ~DecoradorEquipo(){ delete decoracion; }

    void degradar() override {
        decoracion->degradar();
        estado=decoracion->getEstado();
        tiempoInactivo=decoracion->getTiempoInactivo();
        cantIncidencias=decoracion->getCantIncidencias();
    }

    void aplicarMantenimiento() override {
        decoracion->aplicarMantenimiento();
        estado=decoracion->getEstado();
        tiempoInactivo=decoracion->getTiempoInactivo();
        cantIncidencias=decoracion->getCantIncidencias();
    }

};


#endif //PROYECTO1PROGRA2_DECORADOREQUIPO_H