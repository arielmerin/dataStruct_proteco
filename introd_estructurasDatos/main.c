#include <stdio.h>
#include <stdlib.h>


struct Node{
    int dato;
    /**
    Esta no es una llamada recursiva, sólo necesitamos poner en este lugar un apuntador,
    esto sirve para
    */
    struct Node* sig;


};

int main()
{
    printf("Hello world!\n");
    return 0;
}

/**
    Pila/ Stack cada elemetnto se encuentra ncima del otro
    una de las caracteristicas es que puedo ver el último que fue almacenado
    para saber que tenemos una pila necesitamos saber si hay otro elemento más allá del último
    como solo podemos ver el último elemento podemo usar un método como
    LIFO
    peek() que sirve para mirar, es por lujo
    push() es com agregar (o sea empujar)
    pop() retirar o remover algún elemento

    En estas etrsuturas no es necesario saber cuántos elementos tengo (como si en los arreglos)

    así se usan los procesos en una linea de código, con push y pop
    La unidad mínima de información se le llama nodo
------  NODO
    contiene los datos y u apuntador a otro dato
    una estrucura de tipo nodo sería declarada caomo

    Forma parte de las estructuras de

-----Bibliotecas o librerias en C
    Lo realmante impotante es .h tiene que ver con que es un archivo de cabecera, lo inluye en el código
    Conjunto de declaraciones y prototipos de funciones (opcionalmente puede tener definiciones) las definicones
    aquí le dicen prototipo a la firma de la función, cada uno de los archivoa debe estar
    definido con el bibilbioteca el pupnto h y el punto c
    el h contiene declaracines y prototipo y el .c contiene declaraciones
*/
