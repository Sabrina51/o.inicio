#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");


    int op;

    printf("\n----------------------------- 8.MENU -----------------------------\n");
    printf("----------\t\t\t\t\t\t----------\n");
    printf("------------------------------------------------------------------\n");
    printf("\n");

        do
        {
        printf("1 - Incluir\n");
        printf("2 - Alterar\n");
        printf("3 - Excluir\n");
        printf("4 - Consultar\n");
        printf("0 - Fim");
        printf("\n");
        printf("\nOp��o: ");
        scanf("%d", &op);
        printf("\n");

        switch(op)
        {
            case 1 :
                printf("---------- Incluir ----------\n");
                printf("\n");
                break;
            case 2 :
                printf("---------- Aterar ----------\n");
                printf("\n");
                break;
            case 3 :
                printf("---------- Excluir ----------\n");
                printf("\n");
                break;

            case 4 :
                printf("---------- Consultar ----------\n");
                printf("\n");
                break;

            case 0:
                break;

            default:
                printf("\n---------- Op��o inv�lida ----------\n");
                printf("\n");
                break;
        }

        }while(op!=0);


    return 0;
}
