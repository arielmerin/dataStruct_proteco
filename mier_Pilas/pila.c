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
        nuevo->sig = nuevo;
    }
    t = nuevo;
}
 
Node* pop(Node* t){
    Node* aux = t;

    if (!isEmpty(t))
    {
        t = t->sig;
        aux->sig = NULL;
    }
    /**
     * Regresamos el 
     */ 
    return aux;
}

Node* peek(Node* t){
    return t;
}

void show(Node* t){
    Node* aux = t;
    if(isEmpty(t)){
        return;
    }
    while (aux->sig != NULL)
    {
        printf("%i", aux->content);
        aux = aux->sig;
    }
}

int popInt(Node*){
    if(isEmpty(t)){
        /**
         * En este caso estamos devolviendo un -1 pero ojo porque tenemos que
         * indicar que esto es un error, porque si no lo hacemo podemos tener
         * cosas extrañas, tampoco podemos regresar null porque al castearlo a 0 nos va a 
         * regresar 0
         * 
         * 
         */
        return -1;
    }
    Node* aux = pop(t);
    int value = aux->content;
    free(aux);
    return value;


}
/**
 * Es importante que regrese algo o bueno algo así
 */
int peekInt(Node* t){
    if (isEmpty(t))
    {
        return -999999;
    }
    return t->content;  
}