#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int x,y;
    int* ap =&x;
    x = 100;
    y = 150;

    x = (*ap)+100;
    ap = &y;
    (*ap) +=15;
    (*ap)++;
    x -=100;

    int z = *ap +x;
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);
    return 0;
}
