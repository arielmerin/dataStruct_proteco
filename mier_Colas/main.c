/**
 * Entrada FIFO
 * Fist In Fist Out
 * 
 * funciona como una cola de tortillas donde tenemos una estructura de nodos
 * En una parte tiene el dato y en otra el apuntador a otro elemnto
 *  El último elemento va a apuntar a nullo sacaría el primet
 *  TEndremos dos apuntadoers, uno al inico y otro al final
 *  un aputnador Header que apunta al final
 *  un apuntador tail que va a apuntar al último elemento
 *  Sólo funciona con Head y no con Tail porqu es FIFO that means que no va al revés
 * 
 *  ------------Operaciones básicas
 * +Agregar elementos
 *          (encolar)
 * +Eliminar elementos
 *          (Desencolar)
 * +Listar
 */

#include <stdio.h>
#include <stdlib.h>

struct nodo
{
    int valor;
    struct nodo* sig;
    {
        /* data */
    };
    
};

struct nodo * head = NULL;
struct nodo * tail = NULL;

void encolar(int dato){
    struct nodo * nuevo;   
    nuevo = malloc(sizeof(struct nodo));
    nuevo->valor = dato;
    nuevo->sig = NULL;

    if (vacia() == 1)
    /**
     * Si está vacía la lista
     */
    {
        head = nuevo;
        tail = nuevo;
    }
    else
    {
        tail->sig = nuevo;
        tail = nuevo;
    }
    
}

int extraer(){
    int info = head->valor;
    struct nodo * aux = inicio;
    if(head == tail){
        head = NULL;
        tail = NULL;
    }else
    {
        head = head->sig;
    }
    free(aux);
    return info;
}
