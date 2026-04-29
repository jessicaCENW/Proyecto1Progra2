
#include "Controlador.h"
#include "Computadora.h"
#include "EquipoGeneral.h"

using namespace std;
Controlador::Controlador(){
    tam = 50;
    can= 0;
}

void Controlador::agregarEquipo(EquipoGeneral* equi){
    if(can<tam){
        equipos[can] = equi;
    }
    can++;
}

