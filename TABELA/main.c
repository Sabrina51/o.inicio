#include <stdio.h>
#include <stdlib.h>
#include <LOCALE.h>
#include <limits.h>
#define MAXLETRAS 10

int main ()
{
    setlocale(LC_ALL, "portuguese");

    printf("\n---------------------------- 6.TABELA ----------------------------\n");
    printf("----------\t\t\t\t\t\t----------\n");
    printf("------------------------------------------------------------------\n");
    printf("\n");

    printf("\nALUNO(A)\tNOTA");
    printf("\n=========\t=====");
    printf("\nMARAIA\t\t9.0");
    printf("\nJOÃO\t\tDEZ");
    printf("\nELIS\t\t4.5");
    printf("\nMARIOA\t\t7.0");
    printf("\n\n");



    return 0;
}
