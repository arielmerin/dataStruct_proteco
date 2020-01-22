#include <stdio.h>
#include "pila.h"
#include<stdlib.h>


/**
Sirve poner una manera de definir una manera de definir la estructura
*/
int main()
{
    Node* pila = createStack();
    push(pila, 5);
    if(isEmpty(pila)){
        printf("HEllo emptyness\n");
    }
    push(pila, 10);
    push(pila, 50);
    push(pila, 15);
    printf("Elementos en la pila después de agregar: \n");
    show(pila);
    pop(pila);
    printf("prueba a pata");
    ///printf("%i", pila->content);
    printf("Elementos en la pila después de quitar el últimio: \n");
    show(pila);

    return 0;
}


/**
Confort crowd
this is in my opinion a great opotunity to meke an awsome program or that and i dont really feel right begin in this place
Hay muchas manera de programar las estructuras de datos, una para los nodos y una para la
estructura de datos en general


*/

/**
 * Tarea poner la opción de que el disco
 */