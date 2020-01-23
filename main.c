#include <stdio.h>
#include "Pila.h"
int main()
{
    Nodo* pila= crearPila();
    push(&pila,3);
    printf("elementos en la pila despues de agregar\n");
    push(&pila,5);
    printf("elementos en la pila despues de agregar\n");
    show(&pila);
    push(&pila,10);
    printf("elementos en la pila despues de agregar\n");
    show(&pila);
    pop(&pila);
    printf("elementos en la pila despues del pop\n");
    show(&pila);
    printf("El elemento en el tope de la pila es: %i\n",peek(&pila)->dato);
    printf("El elemento en el tope de la pila es: %i\n",peekInt(&pila));
    printf("Retirando: %i\n",pop(&pila));
    show(&pila);
    pop(&pila);
    pop(&pila);
    return 0;
}





