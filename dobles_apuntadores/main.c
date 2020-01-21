#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Apuntador doble , arreglos sobes!\n");


    //Declarar variables
    int raw, col;

    int** matrix = NULL;

    //Reservar memoria
    matrix = (int**)malloc(raw*sizeof(int*))
    /*
    Hacer un ciclo que dependa del número de renglones
    porque es uno por uno
    */
    for(int i = 0; i < raw; i++){
        matrix[i] = (int*)malloc(col*sizeof(int));
        /*
        Esta es otra manera de hacer lo que está en la linea anterior
        *(matrix + i) = (int*)malloc(col*sizeof(int));
        */

    }

    //Validar el espacio


    //Procesamiento de datos


    //Librear memoria (free)
    return 0;
}


/*
Cómo hacer un apuntador doble o un apuntador a un apuntador
Hay qye gacer dis oasis y luefo cada uno de esos y así recursivamente (esto es un apuntador pero en una matriz de 2*2)


*/
