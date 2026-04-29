
#ifndef PROYECTO1PROGRA2_REPORTE_H
#define PROYECTO1PROGRA2_REPORTE_H
#include <vector>
#include <fstream>
#include "EquipoGeneral.h"

using namespace std;



class Reporte {
private:
    ofstream archivo;
    ofstream archivoFinal;
public:
    Reporte();
    ~Reporte();

    void abrirArchivo();
    void cerrarArchivo();

    void registroDiario(int dia);
    void registroFinal(vector<EquipoGeneral*>& t);
};


#endif //PROYECTO1PROGRA2_REPORTE_H