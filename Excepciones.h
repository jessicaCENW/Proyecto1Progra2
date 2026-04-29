
#ifndef PROYECTO1PROGRA2_EXCEPCIONES_H
#define PROYECTO1PROGRA2_EXCEPCIONES_H

#endif //PROYECTO1PROGRA2_EXCEPCIONES_H
#include <string>
#include <stdexcept>

using namespace std;

class Excepcion_Sistema : public runtime_error {
    public:
    Excepcion_Sistema(const string &s) : runtime_error("ERROR " + s) {}
};

class Excepcion_ArchivoInvalido : public Excepcion_Sistema {
    public:
    Excepcion_ArchivoInvalido(const string &archivo) : Excepcion_Sistema("No se pudo abrir el archivo " + archivo) {}
};

class Excepcion_OperacionNoPosible : public Excepcion_Sistema {
    public:
    Excepcion_OperacionNoPosible(const string &s) : Excepcion_Sistema("No puede realizar esta accion " + s) {}
};

class Excepcion_FormatoMal : public Excepcion_Sistema {
    public:
    Excepcion_FormatoMal(const string &s) : Excepcion_Sistema("Tiene un error de formato " + s) {}
};