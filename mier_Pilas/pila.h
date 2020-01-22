#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include"node.h"

Node* createStack();

bool isEmpty(Node* t);


/**
    Recuerda que lo súnico escenciales son push y pop si no no es una pila ok
*/
void push(Node* t, int data);
 
Node* pop(Node* t);

Node* peek(Node* t);

void show(Node* t);