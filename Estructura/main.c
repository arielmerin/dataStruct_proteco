#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct computer{
    char entrada[20];
    char salida[20];
    char marca[20];
    char modelo[20];
    int memoria;

};
 //Declaración de funciones, como solo poner la firma de estas
void readData(struct computer c);
struct computer create();
//Uso de typedef unsigned long long int Var; donde var es lo que puede variar
int main()
{

    printf("Hello world!\n");

    struct computer c1;

    strcpy(c1.entrada, "Teclado") ;
    strcpy(c1.marca, "Hewlett packard" );
    strcpy(c1.modelo,"54as");
    strcpy(c1.salida, "Pantalla");
    strcpy(c1.memoria, 15452);

    struct computer c2 = {
       "Mouse",
       "Bocinas",
       "Asus",
       "54adf548",
       1544
    };

    struct computer c3 = create();
    readData(c3);
    print_data(c3);

    return 0;
}

void readData(struct computer c){
    printf("Ingresa una marca: \n");
    scanf("%s", c.marca);
    printf("Ingresa un dispositivo de entrada: \n");
    scanf("%s", c.entrada);
    printf("Ingresa una dispositivo de salida: \n");
    scanf("%s", c.salida);
    printf("Ingresa un modelo: \n");
    scanf("%s", c.modelo);
    printf("Ingresa la cantidad de memoria: \n");
    scanf("%d", c.memoria);
}

struct computer create(){
    struct computer nueva;
    return nueva;
}

void print_data(struct computer c){
    printf("La marca es: %s", c.marca);
    printf("El dispositivo de entrada es: %s", c.entrada);
    printf("El dispositivo de salida es: %s", c.salida);
    printf("El tamano de memoria es: %d", c.memoria);
    printf("El modelo es: %s", c.modelo);
}




