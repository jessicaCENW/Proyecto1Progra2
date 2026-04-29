
#ifndef EQUIPOGENERAL_H
#define EQUIPOGENERAL_H
#ifndef PROYECTO1PROGRA2_EQUIPOGENERAL_H
#define PROYECTO1PROGRA2_EQUIPOGENERAL_H
#include <vector>
using namespace std;
#include <string>
#include "Incidencia.h"

class EquipoGeneral {
    //clase abstracta y base
protected:
    string id;
    int criticidad;
    double prioridad;
    double estado;
    int cantIncidencias;//canttidad de problemas activos
    int tiempoInactivo;
    vector<Incidencia*> incidencias;

public:
    EquipoGeneral(string i, double crit, double e):id(i), criticidad(crit), estado(e), prioridad(0), cantIncidencias(0), tiempoInactivo(0){}
    virtual ~EquipoGeneral();
    double getPrioridad() const {return prioridad;}
    string getId() const {return id;}
    double getCriticidad() const {return criticidad;}
    double getEstado() const {return estado;}
    int getCantIncidencias() const {return cantIncidencias;}
    int getTiempoInactivo() const {return tiempoInactivo;}

    void calcularPrioridad() {
        prioridad = (criticidad * 0.5) + (cantIncidencias * 0.3) + (tiempoInactivo * 0.2);
    }

    void setCantIncidencias(int n) { cantIncidencias = n; }
    void agregarIncidencias(Incidencia* i);
    void actualizarIncidencias();
    void resetTiempo();


    virtual string descripcion() const = 0;
    virtual void aplicarMantenimiento() = 0;
    virtual void degradar() = 0;


};


#endif //PROYECTO1PROGRA2_EQUIPO_H
#endif // EQUIPO_H
