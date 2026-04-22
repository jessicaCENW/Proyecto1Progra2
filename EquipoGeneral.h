//
// Created by pc1 on 21/4/2026.
//
#ifndef EQUIPO_H
#define EQUIPO_H

#ifndef PROYECTO1PROGRA2_EQUIPO_H
#define PROYECTO1PROGRA2_EQUIPO_H
using namespace std;
#include <string>

class EquipoGeneral {
    //clase abstracta y base
protected:
    string id; //o nombre
public:
    EquipoGeneral();
    virtual ~EquipoGeneral();
    virtual string descripcion() const = 0;
};


#endif //PROYECTO1PROGRA2_EQUIPO_H
#endif // EQUIPO_H
