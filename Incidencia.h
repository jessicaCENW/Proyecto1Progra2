
#ifndef PROYECTO1PROGRA2_INCIDENCIA_H
#define PROYECTO1PROGRA2_INCIDENCIA_H
using namespace std;
#include <iostream>
#include <string>

class EquipoGeneral; //declaro para evitar errores

class Incidencia {
private:
    bool activa; //si tiene o no incidencia
    string severidad; //clasifica que tan grave esta
    string idDelEquipo;

public:
    Incidencia(string a, string severidad);
    bool estaActivo(); //si hay incidencia o no
    void resolver(); //quita incidencia y baja severidad
    string getSeveridad();

    string getIdEquipoPerteneciente() const;

};




#endif //PROYECTO1PROGRA2_INCIDENCIA_H