#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include"pila.h"

Node* createStack(){
    /**
    Es un apuntador que tenemos declardo en pila.h pero por el momento no tiene nada declarado
    así que


    olvida todo lo anterior, debe de ir adentro de este lugar el nodo declarado ok
    */
    Node* top = NULL;
    return top;
}

/**
 * Sólo se encarga de verificar si un tope es nulo 
 */

bool isEmpty(Node* t){
    if (t == NULL){
        return true;
    }
    return false;
}


/**
    Recuerda que los únicos escenciales son push y pop si no no es una pila ok

    El orden importa, primero debemos de poner  el nuevo apuntando al tope y finalmente el tope apuntand
    al nuevo, es necesario porque de otra manera de va a ciclar en el último elemento
*/
void push(Node* t, int data){
    Node* nuevo = createNode(data);

    if (!isEmpty(t))
    {
        nuevo->sig = t;
    }
    t = nuevo;
}
 
Node* pop(Node* t);

Node* peek(Node* t);

Node* show(Node* t);