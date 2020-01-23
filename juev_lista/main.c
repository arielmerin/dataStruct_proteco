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
int lookAt(List* l, int posicion);

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

List* create_list(){
    List* nueva = (List*)malloc(sizeof(List));
    if (nueva == NULL)
    {
        printf("Error, no se pudo reservar espacio en la memoria");
        return NULL;
    }
    nueva->back = nueva->front = NULL;
    nueva->size = 0;

    return nueva;
}

bool isEmptyList(List* l){
    if(l->front == NULL){
        return true;
    }
    return false;
}

void insertFront(List* l, int data){
    /**
     * Crear nodo nuevo
     */
    Nodo* nuevo = crearNodo(data);
    /**
     * Verificar si la lista está vacia
     */
    if (isEmptyList(l)){
        l->front = l->back = nuevo;
    }
    else
    {
        nuevo->siguiente = l->front;
        l->front = nuevo;
    }
    /**
     * Indepedientemente del caso tenemos que aumentar el tamaño del 
     */
    l->size++;
}
/**
 * Esta parte es muy parecido a la parte de Queue
 */
void insertBack(List* l, int data){
    Nodo* nuevo = crearNodo(data);
    if(isEmptyList(l)){
        l->front = l->back = nuevo;
    }
    else
    {
        l->back->siguiente = nuevo;
        l->back = nuevo;
    }
    l->size++;
}

/**
 * Es muy fácil eliminar el prinicipio así que es lo mismo que en Eliminar de una pila
 * se parece mucho a pop()
 */

int removeFront(List* l){
    if(isEmptyList(l)){
        printf("La lista está vacía ok\n ");
        return -99999;
    }
    /**
     * Para remover simepre hay que usar un auxiliar si no se pierde la lista
     */
    Nodo* aux = front;
    /**
     * Movemos el front a siguiente para desenlazarla
     */
    front = front->siguiente;
    /**
     * Para mantener la memoria organizada
     */
    aux->siguiente = NULL;
    /**
     * Es una opción segura, recomentadada para no perder el dato
     * importante poner aux-> valor porque si no solo devuelve la parte dememoria;
     */
    int respaldo = aux->dato;

    free(aux);
    return respaldo;
}


#endif

/**
 * Este tipo de isEmtpyList() recibe sólo un apuntador y no dos tipos de aputnadores