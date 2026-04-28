

#ifndef PROYECTO1PROGRA2_CONTROLADOR_H
#define PROYECTO1PROGRA2_CONTROLADOR_H
#include "EquipoGeneral"

class Controlador {
private:
EquipoGeneral* equipos;
int can;
int tam;

public:
Controlador();
void agregarEquipo(EquipoGeneral* equi);
void simulacion();

};


#endif //PROYECTO1PROGRA2_CONTROLADOR_H