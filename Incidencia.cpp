
#include "Incidencia.h"
#include "Computadora.h"
#include "Excepciones.h"
#include "EquipoGeneral.h"
#include <iostream>
using namespace std;

Incidencia::Incidencia(string a, string severidad) {
    activa = false;
    this -> severidad = severidad;
    idDelEquipo = a;
}

bool Incidencia::estaActivo() {
    return activa;
}

void Incidencia::resolver() {
    activa = false;
    severidad = "BAJA";
}

string Incidencia::getSeveridad() {return severidad;}

string Incidencia::getIdEquipoPerteneciente() const {
    return idDelEquipo;
}


