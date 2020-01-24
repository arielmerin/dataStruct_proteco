//Pila.h

//Evita inclusiones múltiples
#ifndef LISTA_H
#define LISTA_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

/**
 * Creado
 */
List* create_list();
/**
 * Creado
 */
bool isEmptyList(List* l);
/**
 * Creado
 */
void insertFront(List* l, int data);
/**
 * Creado
 */
void insertBack(List* l, int data);
/**
 * Creado
 */
void insertAt(List* l, int data, int pos);
/**
 * Creado
 */
int revomeFront(List* l);
/**
 * Creado
 */
int revomeBack(List* l);

int removeAt(List* l, int pos);
void lookAt(List* l, int pos);
/**
 * Creado
 */
void showList(List* l);

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
    Nodo* aux = l->front;
    /**
     * Movemos el front a siguiente para desenlazarla
     */
    l->front = l->front->siguiente;
    /**
     * Para mantener la memoria organizada
     */
    aux->siguiente = NULL;
    /**
     * Es una opción segura, recomentadada para no perder el dato
     * importante poner aux-> valor porque si no solo devuelve la parte dememoria;
     */
    int respaldo = aux->dato;
    l->size--;

    free(aux);
    return respaldo;
}

int removeBack(List* l){
    /**
     * Para revisar si está o no vacía
     */
    if(isEmptyList(l)){
        printf("La lista está vacía ok\n ");
        return -99999;
    }

    Nodo* aux = l->front;
    /**
     * Hay que hacer otro auxiliar para guardar lo que tenemos en el dato guardado
     */

    Nodo* aux_final = l->back;
    while (aux->siguiente != l->back)
    {
        aux = aux->siguiente;
    }
    /**
     * Que la cola de la lista sea igual al penúltimo elemento, lo que obtivimos
     * del cilco while
     */
    l->back = aux;
    /**
     * Hay que hacer que el penúltimo elemento de la lista apunte a nulo para desligar la lista
     */
    l->back->siguiente = NULL;
    /**
     * Obtener el resplado de la lista para no perderlo
     */
    int respaldo = aux_final->dato;
    /**
     * Liberar memoria de auxiliar 
     */
    free(aux_final);
    /**
     * Decrementamos el tamaño de la lista
     */
    l->size--;

    return respaldo;
}

void insertAt(List* l, int data, int pos){
    if(isEmptyList(l)){
        insertFront(l, data);
    }

    if (pos == 0)
    {
        printf("Insertando por el frente\n");
        insertFront(l, data);
    }
    else if (pos == l->size)
    {
        printf("Insertando al final\n");
        insertBack(l, data);
    }
    /**
     * Código corregido donde no se consideraba el caso en que las posiciones no fueran válidas
     */
    else if( pos < 0 || pos > l->size){
        printf("La posición es incorrecta");
        return; 
    } else
    {
        printf("Insertando en la posición: %i", pos);
        Nodo* nuevo = crearNodo(data);
        Nodo* aux = l->front;
        for (int i = 0; i < pos -1; i++)
        {
            aux = aux->siguiente;
        }
        nuevo->siguiente = aux->siguiente;
        aux->siguiente = nuevo;
        l->size++;
    }
}
int removeAt(List* l, int pos){

    if(isEmptyList(l)){
        printf("Error, la lista se encuentra vacía\n");
        return -9999;
    }

    if (pos == 0)
    {
        printf("Insertando por el frente\n");
        removeFront(l);
    }
    else if (pos == l->size - 1)
    {
        printf("Insertando al final\n");
        removeBack(l);
    }
    /**
     * Código corregido donde no se consideraba el caso en que las posiciones no fueran válidas
     */
    else if( pos < 0 || pos >= l->size){
        printf("La posición es incorrecta\n");
        return -99999; 
    } else
    {
        printf("Eliminando en la posición: %i", pos);

        /**
         * Crear auxiliar que me ayudará a eliminar el elemento pero este estrá más allá del otro
         */        
        Nodo* aux = l->front;
        /**
         * Crear auxiliar que me ayudará a eliminar el elemento pero este estrá más allá del otro
         */
        Nodo* scout = l->front;
        for (int i = 0; i < pos -1; i++)
        {   
            /**
             * Lllegará a estar uno antes de la posición que queremos eliminar
             */
            aux = aux->siguiente;
        }
        /**
         * Recorremos el scout al valor quue queremos eliminar
         */
        scout = aux->siguiente;
        /**
         * El auxiiliar apuntará al siguiente del elemento que queremos eliminar
         */
        aux->siguiente = scout->siguiente;
        /**
         * Haremos que el siguiente del elemento a eliminar apunte a nulo para mantener en orden la memoria
         */
        scout->siguiente = NULL;
        /**
         * Respaldando el dato 
         */
        int respaldo = scout->dato;
        /**
         * Liberando sólo el elemento a eliminar, por si las dudas
         */
        free(scout);
        /**
         * Decrementamos el valor del tamaño de nuestra lista
         */
        l->size--;
        return respaldo;
    }
}

/**
 * Sirve para mostrar los elementos de una lista
 */
void showList(List* l){
    Nodo* aux = l->front;
    /**
     * Verificamos que la lista no sea vacía, de serlo el programa termina
     */
    if(isEmptyList(l)){
        printf("No fue posible imprimir nada, lista vacía");
        return;
    }
    /**
     * Este while hace que recorramos todos los elementos y podamos ver qué onad con estos
     */
    while (aux != NULL )
    {
        /**
         * Aquí podemos usar el %3i que sirve para mostrar los digitos faltantes y si le pongo un valor más grande
         * no pasa nada, se ajusta y me sigue mostrando la cantidad con más dígitos
         */
        printf("%3i\n", aux->dato);
        /**
         * Sirve para hacer el corrimiento de los siguientes elementos
         */
        aux = aux->siguiente;
    }
    
}
void lookAt(List* l, int pos){
    if(isEmptyList(l)){
        return;
    }
    if (pos >= l->size || pos < 0)
    {   
        printf("La posición es inválida\n");
        return;
    } else if (pos == 0)
    {
        int valor_frente = l->front->dato;
        printf("%i\n", valor_frente);
        return;
    }else if (pos == l->size - 1)
    {   
        int valor_fondo = l->back->dato;
        printf("%i\n", valor_fondo);
    }else
    {
        Nodo* aux = l->front;
        for (int i = 0; i <= pos; i++)
        {
            aux = aux->siguiente;
        }
        int respuesta = aux->dato;
        printf("%i\n", respuesta);  
    }
}



#endif

/**
 * Este tipo de isEmtpyList() recibe sólo un apuntador y no dos tipos de aputnadores
 * Tarea hacer el main, y luego poner elementos 
 * En el main no vamos a manejar los ampersand porque no estamos usando lo de los aputnadores dobles ok 
 */


/**
 * 
 * Hacer de tarea que el auxiliar y el scout se pongan en un mimo for para implementar memoria
 */