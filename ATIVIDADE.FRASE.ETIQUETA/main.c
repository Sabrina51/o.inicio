#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <limits.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    char nome[51];
    char endereco[60];
    char bairro[50];
    char cidade[30];
    char cep[10];
    char telefone[12];
    char numero;

    printf("\n------------------------ 1.FRASE NA TELA -------------------------\n");
    printf("----------\t\t\t\t\t\t----------\n");
    printf("Estou cursando Análise de Desenvolvimento de Sistemas na FATEC-AM!\n");
    printf("----------\t\t\t\t\t\t----------\n");
    printf("------------------------------------------------------------------\n\n\n\n");

    printf("\n------------------------ 2.ETIQUETA ------------------------------\n");
    printf("----------\t\t\t\t\t\t----------\n");
    printf("\t\tInserção de Dados Pessoais\n");
    printf("----------\t\t\t\t\t\t----------\n");
    printf("------------------------------------------------------------------\n");

    printf("\nDigite seu nome: ");
    scanf("%[^\n]s",nome);
    fflush(stdin);

    printf("\nDigite seu endereço: ");
    scanf("%[^\n]s",endereco);
    fflush(stdin);

    printf("\nDigite seu CEP: ");
    scanf("%s",cep);
    printf("\nDigite seu telefone: ");
    scanf("%s",telefone);

    printf("\n\n------------------------------------------------------------------\n");
    printf("----------\t\tConfira seu dados\t\t----------\n");

    printf("\nNome: %s",nome);
    printf("\nEndereco: %s",endereco);

    fflush(stdin);
    printf("\nCEP: %s Telefone: %s\n\n\n",cep, telefone);

    system("PAUSE");
    return 0;
}
