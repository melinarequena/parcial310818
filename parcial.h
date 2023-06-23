//
// Created by Administrador on 22/6/2023.
//

#ifndef PARCIAL310818_PARCIAL_H
#define PARCIAL310818_PARCIAL_H

typedef struct node{
    int data;
    struct node * next;
}Node;

typedef struct lista{
    Node * header;
}Lista;

Node * newNode(int data);
Lista * newLista();
void enlistar(Lista * lista, Node * nodo);
void imprimir(Lista * lista);
Lista * resta(Lista * lista1, Lista * lista2);


#endif //PARCIAL310818_PARCIAL_H
