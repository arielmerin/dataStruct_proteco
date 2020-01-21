#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Declarar variables
  int ren, col;
  int** matriz = NULL;

  printf("Ingesa el numero de renglones:\t");
  scanf("%d",&ren);
  printf("Ingesa el numero de columnas:\t");
  scanf("%d",&col);

  //Reservar memoria
  matriz = (int**)malloc(ren*sizeof(int*));
  for(int i = 0; i < ren; i++){
    matriz[i] = (int*)malloc(col*sizeof(int));
    //*(matriz + i) = (int*)malloc(col*sizeof(int));
  }
  if(matriz == NULL){
    printf("Memoria insuficiente");
    return -1;
  }

  //Procesamiento de datos
  for(int i = 0; i < ren; i++) {
    for(int j = 0; j < col; j++) {
      printf("Ingresa el elemnto %i,%i: ", i, j);
      scanf("%i",*(matriz + i) + j);
    }
  }

/*  for(int i = 0; i < ren; i++) {
    for(int j = 0; j < col; j++) {
      printf("Elemento %i,%i: %i\n", i, j, *(*(matriz +i) + j) );
    }
  }
*/
	printf("\n");
    for(int i = 0; i < ren; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%i\t",*(*(matriz +i) + j));
        }
        printf("\n");
    }
  //Liberar memoria
    printf("\n Transpuesta");
	for(int j = 0; j < col; j++)
    {
      printf("\n");
    	for(int i = 0; i < ren; i++)
    	{
      printf("%i\t", *(*(matriz +i) + j) );
    }
  }
  for(int i = 0; i < ren; i++) {
    free(matriz[i]);
    //free(*(matriz + i));
  }
  free(matriz);


  return 0;
}
