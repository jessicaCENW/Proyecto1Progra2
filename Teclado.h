

#ifndef PROYECTO1PROGRA2_TECLADO_H
#define PROYECTO1PROGRA2_TECLADO_H


class Teclado {
public:
    Teclado(EquipoGeneral* d): DecoradorEquipo(d) {}
    string descripcion() const override {
        return decoracion->descripcion() + " + teclado";
    }
};


#endif //PROYECTO1PROGRA2_TECLADO_H