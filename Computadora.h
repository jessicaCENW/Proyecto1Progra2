#ifndef PROYECTO1PROGRA2_EQUIPO_H
#define PROYECTO1PROGRA2_EQUIPO_H
#include <string>

#include "EquipoGeneral.h"
#include "EquipoGeneral.h"


using namespace std;

class Computadora: public EquipoGeneral {

private:
    int criticidad;
    double estado;
    int incidenciasAct;
    float tiempo;
    double prioridad;
    double tiempoInactivo;

public:
    Computadora(string id, int criticidad, double estado);

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

    string descripcion() const override;
};


#endif //PROYECTO1PROGRA2_EQUIPO_H
