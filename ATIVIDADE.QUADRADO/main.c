#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main (void)
{
    setlocale(LC_ALL, "portuguese");

    printf("\n--------------------------- 5.QUADRADO ---------------------------\n");
    printf("----------\t\t\t\t\t\t----------\n");
    printf("------------------------------------------------------------------\n");
    printf("\n");

    for (int linha=0; linha <5; linha++){
    	printf("x");
        }

    for (int coluna=0; coluna <3; coluna++){
    	printf("\nx   x");
    	}
    	printf("\n");

    for (int linha=0; linha <5; linha++){
    	printf("x");
        }

    printf("\n");

    return(0);
}
