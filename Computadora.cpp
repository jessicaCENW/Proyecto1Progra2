

#include <iosfwd>
#include "Computadora.h"
#include <sstream>
#include <string>
#include "EquipoGeneral.h"
using namespace std;

string Computadora::descripcion() const {
    stringstream ss;
    ss<<"Computadora: "<< id <<endl;

    return ss.str();
}


string Computadora::getId() const { return id; }
int Computadora::getCriticidad() const { return criticidad; }
double Computadora::getEstado() const { return estado; }
int Computadora::getTiempoInactivo() const { return tiempoInactivo; }

double Computadora::getPrioridad() const {
    return prioridad;
}

void Computadora::setEstado(double nuevoEstado) {estado = nuevoEstado;}

