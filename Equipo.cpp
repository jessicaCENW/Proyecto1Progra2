

#include "Equipo.h"

string Equipo::getId() const { return id; }
int Equipo::getCriticidad() const { return criticidad; }
double Equipo::getEstado() const { return estado; }
int Equipo::getTiempoInactivo() const { return tiempoInactivo; }

double Equipo::getPrioridad() const {
    return prioridad;
}

void Equipo::setEstado(double nuevoEstado) {estado = nuevoEstado;}

