#include <stdio.h>
#include <stdlib.h>


struct computer{
    char entrada[10];
    char salida[10];
    char marca[10];
    char modelo[10];
    int memoria;

};

void readData(struct computer c);

struct computer create();
//Uso de typedef unsigned long long int Var; donde var es lo que puede variar
int main()
{

    printf("Hello world!\n");
     struct computer c1;

     c1.entrada = "Teclado";
     c1.marca = "Hewlett packard";
     c1.modelo = "54as";
     c1.salida = "Pantalla";
     c1.memoria = 1322;

     struct computer c2{
        "Mouse",
        "Bocinas",
        "Asus",
        "54adf548",
        1544
     }
    return 0;
}

