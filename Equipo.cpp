

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

//metodos
void Equipo:: degradar(){
double desgaste= criticidad*0.7;
estado-=desgaste;

if(estado<0){
estado=0;}

}
void Equipo::incrementarTiempoInactivo(){
     tiempoInactivo++;
}
void Equipo::resetTiempoInactivo(){
tiempoInactivo=0;
}

int Equipo::contarIncidenciasActivas() {
    int contador = 0;

    for (int i = 0; i < cantidad; i++) {
        if (incidencias[i]->estaActiva()) {
            contador++;
        }
    }

    return contador;
}


 void Equipo::calcularPrioridad(){
int incidencias_activas=contarIncidenciasActivas();

    prioridad = (criticidad * 0.5) +
    (incidencias_activas * 0.3) +
    (tiempo_inactivo * 0.2):
}

void aplicarMantenimiento(){

}
