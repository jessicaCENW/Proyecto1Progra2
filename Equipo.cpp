

#include "Equipo.h"

Equipo::Equipo(string id, int criticidad, double estado){
   this->id = id;
    this->criticidad = criticidad;
    this->estado = estado;

    incidencias = new Incidencia*[tam];
}
Equipo::~Equipo() {
    for (int i = 0; i < can; i++) {
        delete incidencias[i];
    }
    delete[] incidencias;
}

string Equipo::getId() const { return id; }
int Equipo::getCriticidad() const { return criticidad; }
double Equipo::getEstado() const { return estado; }
int Equipo::getTiempoInactivo() const { return tiempoInactivo; }
double Equipo::getPrioridad() const { return prioridad; }

void Equipo::setEstado(double nuevoEstado) {estado = nuevoEstado;}

