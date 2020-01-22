#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include"node.h"

Node* createStack();

bool isEmpty();


/**
    Recuerda que lo súnico escenciales son push y pop si no no es una pila ok
*/
void push(Node* stack, int data);
 
Node* pop(Node* stack);

Node* peek(Node* stack);

Node* show(Node* stack);