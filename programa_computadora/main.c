#include <stdio.h>
#include <string.h>

struct computadora {
  char marca[10];
  char modelo[10];
  int memoria;
  char procesador[10];
};
//Prototipos de funciones
void leerDatos(struct computadora c);
struct computadora crear();
void imprimirDatos(struct computadora c);

int main() {
	printf("Hola mundo");

  struct computadora c1;
  struct computadora c2 = {
    "ASUS",
    "X555Q",
    8192,
    "A10"
  };

  strcpy(c1.marca,"Acer");
  strcpy(c1.modelo,"Aspire");
  c1.memoria = 4096;
  strcpy(c1.procesador,"Pentium IV");

  struct computadora c3 = crear();
  leerDatos(c3);
  imprimirDatos(c3);
    return 0;
}

//Definiciones de funciones
void leerDatos(struct computadora c){
  printf("Ingresa marca: \n");
  scanf("%s",c.marca);
  printf("Ingresa modelo: \n");
  scanf("%s",c.modelo);
  printf("Ingresa memoria: \n");
  scanf("%d",&c.memoria);
  printf("Ingresa procesador: \n");
  scanf("%s",c.procesador);
}

struct computadora crear(){
  struct computadora nueva;
  return nueva;
}

void imprimirDatos(struct computadora c){
  printf("Marca: %s",c.marca);
  printf("Modelo: %s",c.modelo);
  printf("Memoria: %d",&c.memoria);
  printf("Procesador: %s",c.procesador);
}
