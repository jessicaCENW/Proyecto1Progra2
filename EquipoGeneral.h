//
// Created by pc1 on 21/4/2026.
//
#ifndef EQUIPOGENERAL_H
#define EQUIPOGENERAL_H
#ifndef PROYECTO1PROGRA2_EQUIPOGENERAL_H
#define PROYECTO1PROGRA2_EQUIPOGENERAL_H
using namespace std;
#include <string>

class EquipoGeneral {
    //clase abstracta y base
public:
    EquipoGeneral();
    virtual ~EquipoGeneral();
    virtual string descripcion() const = 0;
};


#endif //PROYECTO1PROGRA2_EQUIPO_H
#endif // EQUIPO_H
