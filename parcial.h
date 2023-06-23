//
// Created by Administrador on 22/6/2023.
//

#ifndef PARCIAL310818_PARCIAL_H
#define PARCIAL310818_PARCIAL_H

typedef struct node{
    char caracter;
    int frecuencia;
    struct node * next;
}Node;

typedef struct pila{
    Node * top;
}Pila;

Node * newNode(char caract, int frecuencia);
Pila * newPila();
void empilar(Pila * pila, Node * nodo);
void imprimir(Pila * pila);


#endif //PARCIAL310818_PARCIAL_H
