

#include "Incidencia.h"


Incidencia::Incidencia() {
    activa = true;
}

bool Incidencia::estaActiva() {
    return activa;
}

void Incidencia::resolver() {
    activa = false;
}