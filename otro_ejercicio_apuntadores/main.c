#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int x,y;
    //& este símbolo representa a donde apuntar el apuntadorm vaya redundancia
    int* ap =&x;
    x = 100;
    y = 150;

    x = (*ap)+100;
    //Ahora tenemos que hacer que el apuntador vaya hacia y
    ap = &y;
    (*ap) +=15;
    (*ap)++;
    x -=100;
    //* usando el asterisco para hacer referencia a lo que tiene guardado en la memoria
    int z = *ap +x;
    printf("El valor de x es: %d\n", x);
    printf("El valor de y es: %d\n", y);
    printf("El valor de z es: %d\n", z);
    return 0;
}
