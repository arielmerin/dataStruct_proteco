#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float x = 10.0;
    float y = 20.0;
    float z = 30.0;
    printf("Hello world!!\n");
    printf("Valor de x: %.2f\n", x);
    printf("Valor de y: %.2f\n", y);
    printf("Valor de z: %.2f\n\n", z);

    float* apt = &x;
    *apt += 10;
    printf("Utilizando el apuntador, aumentar el valor de x en 10. x = %.2f \n", x);
    apt = &z;
    *apt += *apt;
    printf("Utilizando el apuntador, multiplicar el valor de z por 2. z = %.2f \n", *apt);
    x += *apt;
    printf("Sumar a la variable x el contenido del apuntador. x = %.2f \n", x);
    y += x;
    y += *apt;
    printf("A la variable y, sumar el valor de x y el contenido del apuntador. y = %.2f \n\n", y);

    printf("Valor de x: %.2f\n", x);
    printf("Valor de y: %.2f\n", y);
    printf("Valor de z: %.2f\n", z);    
    return 0;
}
