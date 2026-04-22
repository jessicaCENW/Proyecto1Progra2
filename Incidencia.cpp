

#include "Incidencia.h"


Incidencia::Incidencia() {
    activa = true;
}

bool Incidencia::estaActivo() {
    return activa;
}

void Incidencia::resolver() {
    activa = false;
}