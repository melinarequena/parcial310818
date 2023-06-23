//
// Created by Administrador on 22/6/2023.
//

#include "parcial.h"
#include <stdlib.h>
#include <stdio.h>

Node *newNode(int data) {
    Node * aux = NULL;
    aux = malloc(sizeof(Node));
    if(aux == NULL){
        printf("Errroroor\n");
        exit(-1);
    }
    aux->next = NULL;
    aux->data = data;
    return aux;
}


void imprimir(Lista * lista) {
    Node * aux = lista->header;
    while (aux != NULL){
        printf("%d\n", aux->data);
        aux = aux->next;
    }
}

Lista *newLista() {
    Lista* aux = NULL;
    aux = malloc(sizeof (Lista));
    if( aux == NULL){
        printf("Error en la asignacion de memoria\n");
        exit (-1);
    }
    aux->header = NULL;
    return aux;
}

void enlistar(Lista *lista, Node *nodo) {
    if(lista->header == NULL){
        lista->header = nodo;
    }else{
        Node * aux = lista->header;
        while(aux->next != NULL){
            aux = aux->next;
        }
        aux->next = nodo;
    }
}

Lista * resta(Lista *lista1, Lista * lista2) {
    Lista * result = newLista();
    Node * aux1 = lista1->header;

    while (aux1 != NULL){
        Node * aux2 = lista2->header;
        int cont = 0;
        while (aux2 != NULL && cont==0){
            if(aux1->data == aux2->data){
                cont++;
            }
            aux2 = aux2->next;
        }
        if(cont == 0 && aux2 != NULL){
            int valor = aux1->data;
            enlistar(result, newNode(valor));
        }
        aux1 = aux1->next;
    }
    return result;
}
