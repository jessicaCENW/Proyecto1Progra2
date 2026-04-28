

#include "Controlador.h"

Controlador::Controlador(){
tam = 50;
can= 0;
EquipoGeneral* new EquipoGeneral*[can];
}

void Controlador::agregarEquipo(EquipoGeneral* equi){
if(can<tam){
equipos[can]=equi;
}
}

