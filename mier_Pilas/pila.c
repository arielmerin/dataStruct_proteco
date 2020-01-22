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

bool isEmpty();


/**
    Recuerda que lo súnico escenciales son push y pop si no no es una pila ok
*/
void push(Node* stack, int data);
 
Node* pop(Node* stack);

Node* peek(Node* stack);

Node* show(Node* stack);