#include <stdio.h>
#include "parcial.h"

int main() {
    Pila * pila = newPila();
    empilar(pila, newNode('A', 1));
    empilar(pila, newNode('P', 1));
    empilar(pila, newNode('M', 1));
    empilar(pila, newNode('B', 1));
    empilar(pila, newNode('A', 1));
    empilar(pila, newNode('M', 1));
    empilar(pila, newNode('T', 1));
    empilar(pila, newNode('R', 1));
    empilar(pila, newNode('A', 1));
    empilar(pila, newNode('M', 1));
    empilar(pila, newNode('T', 1));
    imprimir(pila);
    return 0;
}
