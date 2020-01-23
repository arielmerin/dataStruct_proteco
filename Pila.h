//Pila.h

//Evita inclusiones múltiples
#ifndef PILA_H
#define PILA_H

#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

//Definición de nodo
typedef struct Nodo {
    int dato;
    struct Nodo* siguiente;
} Nodo;

//Funciones de nodo
Nodo* crearNodo(int dato);

//Funciones de pila
Nodo* crearPila();
bool vacia(Nodo** tope);
void push(Nodo** tope, int dato);
Nodo* popNodo(Nodo** tope);
Nodo* peek(Nodo** tope);
void show(Nodo** tope);
int pop(Nodo** tope);
int peekInt(Nodo** tope);

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

//Definiendo funciones de pila
Nodo* crearPila() {
   Nodo* tope=NULL;
   return tope;
}

bool vacia(Nodo** tope) {
    if(*tope==NULL) {
        return true;
    }
        return false;   
}

void push(Nodo** tope, int dato) {
    Nodo* nuevo = crearNodo(dato);
    if(nuevo == NULL) {
        return;
    }
    printf("Dato nodo: %i\n", nuevo->dato);
    if(!vacia(tope)) {//si no esta vacia
        nuevo->siguiente=*tope;
    }
    *tope=nuevo;
} 

Nodo* popNodo(Nodo** tope) {   //Nota: liberar espacio en el main
    Nodo* aux = *tope;
    if(!vacia(tope)) {
        *tope=(*tope)->siguiente;
        aux->siguiente=NULL;
    }
    else {
        printf("Pila vacia");
    }
    return aux;
}

void show(Nodo** tope) {
    Nodo* aux=*tope;
    if(vacia(tope)) {
        return;
    }
    while (aux != NULL) {
       printf("| %i |\n",aux->dato);
       aux=aux->siguiente;
    }   
}

Nodo* peek(Nodo** tope) {
    if(*tope == NULL) {
        printf("Pila vacia");
    }
    return *tope;
}

int pop(Nodo** tope) {
    if(vacia(tope)){
        printf("Pila vacia");
        return -999999;     //Indicamos que la pila esta vacía
    }
    Nodo* aux=popNodo(tope);
    int valor= aux->dato;
    free(aux);
    return valor;
}

int peekInt(Nodo** tope) {
    if(vacia(tope)) {
        printf("Pila vacia");
        return -999999;     //Indicamos que la pila esta vacía
    }
    return peek(tope)->dato;
}

#endif