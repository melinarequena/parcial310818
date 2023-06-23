//
// Created by Administrador on 22/6/2023.
//

#include "parcial.h"
#include <stdlib.h>
#include <stdio.h>

Node *newNode(char caract, int frecuencia) {
    Node * aux = NULL;
    aux = malloc(sizeof(Node));
    if(aux == NULL){
        printf("Errroroor\n");
        exit(-1);
    }
    aux->next = NULL;
    aux->frecuencia = 1;
    aux->caracter = caract;
    return aux;
}

Pila *newPila() {
    Pila * aux = NULL;
    aux = malloc(sizeof (Pila));
    if(aux == NULL){
        printf("Error\n");
        exit (-1);
    }
    aux->top = NULL;
    return aux;
}

void empilar(Pila *pila, Node *nodo) {
    Node * aux = pila->top;
    while (aux != NULL && aux->caracter != nodo->caracter){
        aux = aux->next;
    }
    if(aux != NULL){
        if(aux->caracter == nodo->caracter){
            nodo->frecuencia ++;
        }
    }

    if(pila->top == NULL){
        pila->top = nodo;
    }else{
        nodo->next = pila->top;
        pila->top = nodo;
    }


}

void imprimir(Pila *pila) {
    Node * aux = pila->top;
    while (aux != NULL){
        printf("%c: %d\n", aux->caracter, aux->frecuencia);
        aux = aux->next;
    }
}
