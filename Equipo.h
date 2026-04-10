

#ifndef PROYECTO1PROGRA2_EQUIPO_H
#define PROYECTO1PROGRA2_EQUIPO_H


class Equipo {

private:
string id;
int criticidad;
double estado;
int incidenciasAct;
float tiempo;

public:
Equipo(string id, int criticidad, double estado);

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


};


#endif //PROYECTO1PROGRA2_EQUIPO_H