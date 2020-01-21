#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Apuntador doble , arreglos sobes!\n");


    //Declarar variables
    int raw, col;
    int** matrix = NULL;

    printf("Ingresa los renglones de la matriz: ");
    scanf("%d", &raw);
    printf("Ingresa el número de columnas: ", &col);
    scanf("%d", &col);

    //Reservar memoria
    matrix = (int**)malloc(raw*sizeof(int*));
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
    if(matrix == NULL){
        printf("Errorm no pudimos reservar el espacio en la memoria");
        return -1;
    }


    //Procesamiento de datos
    /**
        En este caso estamos recorriendo un arreglo de manera bidimensional con ciclos anidados
    */
    for(int i = 0;  i < raw; i++){

        for(int j = 0; j < col; j++){
            printf("Ingresa el elemnto %i, %i :  ", i +1 , j+1);
            /**
            Recordar que matriz ya es una dirección de memoria, con i puedo moverme en los renglones y luego le sumamos
            j que sirve para moverse entre las columnas
            */
            scanf("%i", *(matrix + i) + j);

        }
    }

    for(int i = 0;  i < raw; i++){

        for(int j = 0; j < col; j++){
        /**
        Nos olvidamos de la flecha porque esto no es una estructura
        */
            printf("Mostrando el elemento alojado en: %i rengln y %i columna = %i \n", i, j, *(*(matrix + i) + j) );
        }
    }

    for(int i = 0; i < raw; i++){
        free(matrix[i]);
    }

    free(matrix);

    //Librear memoria (free)
    return 0;
}


/*
Cómo hacer un apuntador doble o un apuntador a un apuntador
Hay qye gacer dis oasis y luefo cada uno de esos y así recursivamente (esto es un apuntador pero en una matriz de 2*2)


*/
