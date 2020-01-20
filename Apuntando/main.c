#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    a = 5;
    b = 6;
    c = 7;
    //Se pone nyll para buenas practicas y no apyntar a otri kadi qye bi sea la dirección de memoria
    int *ap = NULL;
    ap = &b;

    *ap +=10;
    c = *ap;
    b = (*ap)+1;
    a = b;
    printf("%d\n",ap);
    printf("Hello world!\n");
    return 0;
}
