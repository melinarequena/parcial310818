#include <stdio.h>
#include "parcial.h"

int main() {
    Lista * lista1 = newLista();
    Lista * lista2 = newLista();
    enlistar(lista2, newNode(1));
    enlistar(lista1, newNode(54));
    enlistar(lista1, newNode(22));
    enlistar(lista1, newNode(7));
    enlistar(lista1, newNode(32));
    enlistar(lista1, newNode(12));

    enlistar(lista2, newNode(4));
    enlistar(lista2, newNode(1));
    enlistar(lista1, newNode(7));
    enlistar(lista1, newNode(12));
    enlistar(lista1, newNode(32));
    enlistar(lista2, newNode(76));
    enlistar(lista2, newNode(188));

    printf("Lista 1:\n");
    imprimir(lista1);
    printf("Lista 1:\n");
    imprimir(lista2);

    Lista * resultado = resta(lista1, lista2);

    printf("Lista resta:\n");
    imprimir(resultado);
    return 0;
}
