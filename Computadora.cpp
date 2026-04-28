

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
double Computadora::getPrioridad() const {return prioridad;}

void Computadora::setEstado(double nuevoEstado) {estado = nuevoEstado;}

void Computadora::degradar(){
double desgaste= criticidad*0.2;
estado += desgaste;

if(estado<=0){
esatdo=0;}
}

void  Compoutadora::incrementarTiempoInactivo(){
tiempoInactivo++;
}

void Computadora::resetTiempoInactivo(){
tiempoInactivo = 0;
}

void calcularPrioridad(){
    prioridad = (criticidad * 0.5) +
                    (incidencias * 0.3) +
                    (tiempoInactivo * 0.2);
}

void aplicarMantenimiento(){
if(estado>=100){
estado=0;
}
incidenciasAct=0;
resetTiempoInactivo();
}
string Computadora::descripcion() const {
return "Computadora: ID "<<getId();<<endl
}

