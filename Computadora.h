#ifndef PROYECTO1PROGRA2_Computadora_H
#define PROYECTO1PROGRA2_Computadora_H
#include <string>
#include <vector>
#include "Incidencia.h"
#include "EquipoGeneral.h"
using namespace std;

class Computadora: public EquipoGeneral {

private:
    float tiempo;

public:
    Computadora(string id, int criticidad, double estado);

    void setEstado(double nuevoEstado);

    void incrementarTiempoInactivo();

    void resetTiempoInactivo();
    void formateo();
    string descripcion() const override;

    void diagnostico();
    void degradar() override;
    void aplicarMantenimiento() override;

};


#endif //PROYECTO1PROGRA2_EQUIPO_H
