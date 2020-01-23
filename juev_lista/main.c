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

//Funciones de nodo
Nodo* crearNodo(int dato);


#endif