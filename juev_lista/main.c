#include <stdio.h>
#include "lista.h"

int main(int argc, char const *argv[])
{   
    printf("¡¡Arriba las locas!!!\n");
    printf("BIENVENIDO A LA LISTA JASJDJA\n");
    List* lista = create_list();
    bool continua = true;
    do
    {
        int answer = 0;
        printf("\n\n========Menú========\n");
        printf("Seleccione una opción válida\n");
        printf("[1] Agregar elementos al inicio de la lista\n");
        printf("[2] Agregar elementos al final de la lista\n");
        printf("[3] Mirar un elemento de la lista, con número de posición\n");
        printf("[4] Eliminar el primer elemento de la lista\n");
        printf("[5] Eliminar el último elemento de la lista\n");
        printf("[6] Mostrar toda la lista\n \n");
        printf("[7] Salir\n");
        scanf("%i",&answer);

        switch (answer)
        {
        case 1:
            printf("Ingrese el número para añadir al frente: ");
            int adderp;
            scanf("%i", &adderp);
            insertFront(lista, adderp);
            break;        
        case 2:
            printf("Ingrese el número para añadir al final: ");
            int add;
            scanf("%i", &add);
            insertBack(lista, add);
            break;
        case 3:
            printf("Ingrese la posición a mirar: ");
            int pos;
            scanf("%i", &pos);
            lookAt(lista, pos);
            break;
        case 4:
            removeFront(lista);
            printf("El primer elemento fue eliminado.\n");
            break;
        case 5:
            removeBack(lista);
            printf("El último elemento fue eliminado.\n");
            break;
        case 6:
            printf("Mostrando todos los elementos\n");
            showList(lista);
            break;
        case 7:
            printf("Hasta luego!\n");
            continua = false;
            break;
        default:
            printf("\n-----------------\nOpción no válida.\nIntente de nuevo\n---------------\n");
            break;
        }

    } while (continua);
    
    return 0;
}
