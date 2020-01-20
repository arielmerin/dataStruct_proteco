#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Disc{
    char artist[60];
    char genre[60];
    float price;
};

struct Disc create_disc();
void modificar_disc(struct Disc* d);
//void imprimir_datos(struct Disc d);

struct Disc crearDisco(){
  struct Disc nuevo;
  printf("Dame artista: ");
  scanf("%s",nuevo.artist);
  printf("Dame genero: ");
  scanf("%s",nuevo.genre);
  printf("Dame precio: ");
  //scanf("%f",nuevo.price);
  return nuevo;
}
int main()
{
    struct Disc d1;
    d1 = crearDisco();

    printf("Hello world!\n");
    return 0;
}

void modificar_disc(struct Disc* d){
  printf("Artista: ");
  scanf("%s", d->artist);
  printf("Género: ");
  scanf("%s", d->genre);
  printf("Precio: ");
  scanf("%f", &d->price);
}

/*
    tipos de memoria
    -memoria automática; cuando el compilador sabe de que tamaño son
    -ahora en los arreglos se neceita volver a compiar todo de nuevo
    -Memoria dinámica: cuando no sea necesario tanto el uso de apuntadores es necesario


    3 funciones de una biblioteca stdlib.h

    malloc(tamaño en bytes)
    calloc(numero de elemetnos, bytes elementos)
    realloc(apuntador, nuevo tamaño)

    --sirve para liberrar ese espacaio de memeoria, para tener más espacio
    fee(ap)

    --Correo del profe: david.yxk@gmail.com
*/



