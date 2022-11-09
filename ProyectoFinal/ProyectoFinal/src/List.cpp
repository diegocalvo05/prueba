#include "List.h"

void insertarLista(string pname) {
    Pais* nuevoPais = new Pais();
    nuevoPais->name = pname;

    if (first == NULL) {
        first = nuevoPais;
        first->sig = first;
        last = first;
    }
    else {
        last->sig = nuevoPais;
        nuevoPais->sig = first;
        last = nuevoPais;
    }
}

void imprimir() {
    Pais* temp = first;

    if (first != NULL) {
        do {
            cout << temp->name << endl;
            temp = temp->sig;
        } while (temp != first);
    }
}

Pais* avanzar() {
    Pais* temp = first;
    temp = temp->sig;
    return temp;
}