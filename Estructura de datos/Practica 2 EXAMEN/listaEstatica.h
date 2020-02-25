#ifndef LISTAESTATICA_H_INCLUDED
#define LISTAESTATICA_H_INCLUDED

#include <cstdlib>
#include <cstring>
#include "colaEstatica.h"

#define MAX 10

struct peluquero{
    int Codigo;
    cadena Apellidos;
    cadena Nombre;
    int TipoServicio;
    cola Col;
};
class lista{
    peluquero elementos[MAX]; // elementos de la lista
    int n;// n� de elementos que tiene la lista
public:
    lista(); // constructor de la clase
    ~lista();// destructor de la clase
    lista(peluquero &e);
    void vaciar();
    bool esvacia();
    int longitud();
    //void anadirIzq(peluquero e); No necesario implementar
    //void anadirDch(peluquero e); No necesario implementar
    //void eliminarIzq(); No necesario implementar
    //void eliminarDch();No necesario implementar
    //tecnico observarIzq(); No necesario implementar
    //tecnico observarDch(); No necesario implementar
    //void concatenar(lista l); No necesario implementar
    bool pertenece(peluquero &e);
    void insertar(int i, peluquero &e);
    void eliminar(int i);
    void modificar(int i, peluquero &e);
    peluquero &observar(int i);
    int posicion(peluquero &e);
};

void copiarpeluquero(peluquero &destino,peluquero &origen);
bool compararpeluquero(peluquero &p1,peluquero &p2);

#endif // LISTAESTATICA_H_INCLUDED
