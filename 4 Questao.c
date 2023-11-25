#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i;
    int numero[5];
    int pares = 0;
    int impares = 0;
    float somaPares = 0;
    float positivo = 0;
    int negativo = 0;
    int quantidade = 0;
    int menorNumero = 999;
    int maiorNumero = 0;
    float mediaPares = 0;
    float somaNumero = 0;
    float mediaTudo = 0;
    float somaTudo = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %d° numero:", i + 1);
        scanf("%d", &numero[i]);

        somaNumero += numero[i];

        if (numero[i] % 2 == 0)
        {
            pares++;
            somaPares += numero[i];
        }
        else
        {

            impares++;
            
        }

        if (numero[i] < 0)
        {
             negativo++;
        }
    

        if (numero[i])
        {
            quantidade++;
           
        }

        if (numero[i] < menorNumero)
        {
            menorNumero = numero[i];
        }
        else if (numero[i] > maiorNumero)
        {

            maiorNumero = numero[i];
        }
        somaTudo += numero[i];
    }

     
    mediaTudo = somaTudo /(float) i;
    mediaPares = somaPares / (float) pares;

    printf("Quantidades de nuneros impares: %d \n", impares);
    printf("Quantidades de nuneros negativos: %d \n", negativo);
    printf("O maior numero: %d \n", maiorNumero);
    printf("O menor numero: %d \n", menorNumero);
    printf("Media de numeros pares: %.1f \n", mediaPares);
    printf("Media de nuneros inseridos : %.1f \n", mediaTudo);

   
    return 0;
}