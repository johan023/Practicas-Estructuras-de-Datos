#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;


struct pasajero
{
    string numero_pasaporte;
    char *nombre;
    string nacionalidad;
    int tipo_ciudadano;
    bool estado_pasaporte;

    struct pasajero *sig;
};

typedef struct LaCola
{
    struct pasajero *primero;
    struct pasajero *ultimo;

}*Cola;


Cola Crear_Cola(void);

bool Cola_Vacia (Cola c);

void Insertar_Pasaporte (Cola c, int tipo);

void EliminarElemento (Cola c);

void MostrarCola (Cola c);

void VerCola (Cola c);

string Nacionalidades();

string Pasaporte();

int Tipo_Pasajero();

char* Generacion_Nombre();

bool Estado_Pasaporte();

string Insertar_Pasaporte_Aleatorio (Cola c, int tipo);

string EliminarElementoAleatorio (Cola c);

string RecorrerCola (Cola c);



