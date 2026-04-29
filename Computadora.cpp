

#include <iosfwd>
#include "Computadora.h"
#include <sstream>
#include <string>
#include "EquipoGeneral.h"
#include <iostream>
#include "Incidencia.h"
using namespace std;

Computadora::Computadora(string id, int criticidad, double estado)
    : EquipoGeneral(id, criticidad, estado) {
}

string Computadora::descripcion() const {
    stringstream ss;
    ss<<"Computadora: "<< id <<endl;
    ss<< "Criticidad: " << criticidad<<endl;
    ss<< "Estado: "     << estado;

    return ss.str();
}

void Computadora::setEstado(double nuevoEstado) {estado = nuevoEstado;}

void Computadora::degradar(){
    double desgaste= criticidad*0.2;
    estado -= desgaste;

    if(estado<=0){
        estado=0;}
}

void  Computadora::incrementarTiempoInactivo(){
    tiempoInactivo++;
}


void Computadora::aplicarMantenimiento(){
    if(estado>=100){
        estado=100;
    }
    for (Incidencia* i : incidencias) {
        if (i->estaActivo()) {
            i->resolver();
        }
    }
    cantIncidencias=0;
    resetTiempoInactivo();
}


void Computadora::formateo() {
    estado=90;
    for (Incidencia* i : incidencias) {
        i->resolver();
    }
    cantIncidencias=0;
    resetTiempoInactivo();

}
