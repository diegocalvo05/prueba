#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;

//creeando la lista de los paises
struct Pais {
    string name;
    int goles;
    Pais* sig;
}*first, * last;

void insertarLista(string pname);
void imprimir();
Pais* avanzar();