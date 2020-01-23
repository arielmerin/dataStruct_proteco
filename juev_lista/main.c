//Pila.h

//Evita inclusiones múltiples
#ifndef LISTA_H
#define LISTA_H

#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

//Definición de nodo
typedef struct Nodo {
    int dato;
    struct Nodo* siguiente;
} Nodo;

typedef struct List
{
    Nodo* front;
    Nodo* back;
    int size;
}List;

List* create_list();
bool isEmptyList(List* l);
void insertFront(List* l, int data);
void insertBack(List* l, int data);
int revomeFront(List* l);
int revomeBack(List* l);
int removeat(List* l, int posicion);
int lookAt(List* l, int posicion)
//Definiendo funciones de nodos
Nodo * crearNodo(int dato) {
    Nodo *nuevo= (Nodo*)malloc(sizeof(Nodo));
    if(nuevo==NULL) {
        printf("Error al crear nodo");
        return NULL;
    }
    nuevo->dato=dato;
    nuevo->siguiente=NULL;
    return nuevo;
}



#endif

/**
 * Este tipo de isEmtpyList() recibe sólo un apuntador y no dos tipos de aputnadores