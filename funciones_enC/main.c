#include <stdio.h>
#include <stdlib.h>



int main()
{
    int *arr = NULL;
    int size;
    int arreglo_elementos[size];

    printf("Hello world!\n");
    printf("Ingresa el tamaño del arreglo: ");
    scanf("%i", &size);

    //El casteo es parte importante de las buenas prácticas, en las nuevas versiones del c el compilador  lo hace por sí mismo
    arr = (int)malloc(sizeof(int) * size);
    //Una vez creado el espacio, vamos a confirmarlo con esta parte del código
    // Apuntador dirección de memoria de otra variable
    if( arr ==  NULL){
        printf("Oh oh, memoria insuficiente. Terrible, oremos");
        //Es una convención que sirve para mensaje de error interno,
        //es importante porque para programas posteriores podríamos identificarlos
        return -1;
    }

    //Asignar o guardar ios datos
    for (int i = 0; i< size; i++){
        printf("Ingresa el elemento %i, darregloel arreglo: ");
        //Hay dos maneras de hacer esto, esta es una manera de hacerlo
        scanf("%i", arreglo_elementos[i] );

        //
    }

    return 0;
}


/*

Malloc -> reserva el espacio en bytes
    cuando solo tenemos que reservar y en seguida podemos asignar
    DEbemos de enviarle un sizeof(tipo de variable) así que hay que multiplicarlos
    por buenas prácticas, debemos de poner una especificación
    estos valores reglresan un

calloc -> reserva nmero de elemento sy tambien los limpia (com con un 0 o null)
    Nos conviene cuando tenemos una agenda teleófinca,
    ejemplo si lo hiciéramos con malloc tendría basura

realloc -> cambair la asignación (tamaño)

free solo sirve para liberar

---- MANERAS DE ASIGNAR VALORES EN UN ARRGLO USANDO LOS APUNTADORES

*/
