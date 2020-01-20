#include <stdio.h>
#include <string.h>

struct computadora {
  char marca[10];
  char modelo[10];
  int memoria;
  char procesador[10];
};
//Prototipos de funciones

//Así es como se pone que es un aputnador o una referencia de la memoria
void leerDatos(struct computadora* c);
struct computadora crear();
void imprimirDatos(struct computadora c);

int main() {
	printf("Hola mundo\n");

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
  //Se le tiene que poner el asterisco para que diferencia de un apuntador
  struct computadora* ap_comp = &c3;
  imprimirDatos(c1);
  imprimirDatos(c2);
  leerDatos(ap_comp);
  imprimirDatos(c3);
    return 0;
}

//Definiciones de funciones
void leerDatos(struct computadora* c){
  printf("Ingresa procesador: \n");
  scanf("%s",c->procesador);
  printf("Ingresa marca: \n");
  scanf("%s",c->marca);
  printf("Ingresa modelo: \n");
  scanf("%s",c->modelo);
  //Ojo aqu necesitaba un & para cuando se refiere a enteros
  printf("Ingresa memoria: \n");
  scanf("%d",&c->memoria);
}

struct computadora crear(){
  struct computadora nueva;
  return nueva;
}

void imprimirDatos(struct computadora c){
  printf("Marca: %s\n",c.marca);
  printf("Modelo: %s\n",c.modelo);
  printf("Memoria: %d\n",&c.memoria);
  printf("Procesador: %s\n",c.procesador);
}
