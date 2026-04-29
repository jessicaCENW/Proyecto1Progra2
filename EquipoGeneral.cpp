
#include "EquipoGeneral.h"

EquipoGeneral::~EquipoGeneral() {
    for (Incidencia* i : incidencias) {
        delete i;
    }
    incidencias.clear();
}

void EquipoGeneral::agregarIncidencias(Incidencia *i) {
    incidencias.push_back(i);
    cantIncidencias++;
}

void EquipoGeneral::actualizarIncidencias() {
    int cont = 0;
    for (Incidencia* i : incidencias) { //es un for que recorre la coleccion de incidencias que hay
        if (i ->estaActivo() ) {
            cont++;
        }
    }
    cantIncidencias = cont;
}

void EquipoGeneral::resetTiempo() {
    tiempoInactivo=0;
}

