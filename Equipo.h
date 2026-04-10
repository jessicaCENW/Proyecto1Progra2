

#ifndef PROYECTO1PROGRA2_EQUIPO_H
#define PROYECTO1PROGRA2_EQUIPO_H
#iclude <string>
#include "Incidencia.h"
using namespace std;

class Equipo {

private:
string id;
int criticidad;
double estado;
double prioridad;
float tiempoAct;

Incidencia* incidencia;
int can;
int tam;

public:
Equipo(string id, int criticidad, double estado);
~Equipo();
    string getId() const;
    int getCriticidad() const;
    double getEstado() const;
    int getTiempoInactivo() const;
    double getPrioridad() const;


    void setEstado(double nuevoEstado);


    void degradar();
    void incrementarTiempoInactivo();
    void resetTiempoInactivo();
    void calcularPrioridad();
    void aplicarMantenimiento();


};


#endif //PROYECTO1PROGRA2_EQUIPO_H