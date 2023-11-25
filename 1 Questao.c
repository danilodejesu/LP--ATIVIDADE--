#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nome[5][200];
    int idade[5];
    float peso[5];
    float altura[5];
    int i, j;
    int maior;
    int menor;
    char idadeNomemaior[200];
    char idadeNomemenor[200];
    float maiorPeso = 0;
    float menorPeso = 999;
    char maiorPesoP[200];
    char menorPesoP[200];
    float maiorAltura = 0;
    float menorAltura = 999;
    char maiorAlturaP[200];
    char menorAlturaP[200];

    for (i = 0; i < 3; i++)
    {
        fflush(stdin);
        printf("Digite o nome: ");
        gets(nome[i]);

        fflush(stdin);

        printf("Digite idade: ");
        scanf("%d", &idade[i]);

        fflush(stdin);

        printf("Digite peso: ");
        scanf("%f", &peso[i]);

        fflush(stdin);

        printf("Digite altura: ");
        scanf("%f", &altura[i]);
        puts("");

        //IDADE
        if (idade[i] > maior)
        {
            maior = idade[i];
            strcpy(idadeNomemaior, nome[i]);
        }
        else if (idade[i] < menor) {
            menor = idade[i];
            strcpy(idadeNomemenor, nome[i]);
        }
        //FIM IDADE

        //PESO
        if (peso[i] > maiorPeso)
        {
            maiorPeso = peso[i];
            strcpy(maiorPesoP, nome[i]);
         
        }
         else if (peso[i] < menorPeso)
        {
            menorPeso = peso[i];
            strcpy(menorPesoP, nome[i]);
        }
        //FIM PESO

        //ALTURA
        if (altura[i] > maiorAltura)
        {
            maiorAltura = altura[i];
            strcpy(maiorAlturaP, nome[i]);
        }

        else if (altura[i] < menorAltura)
        {
            menorAltura = altura[i];
            strcpy(menorAlturaP, nome[i]);
        }
        //FIM ALTURA
         
    }

    printf("Pessoa mais velha: %s\n", idadeNomemaior);
    printf("Maior idade: %d \n", maior);
    printf("Pessoa mais nova: %s\n", idadeNomemenor);
    printf("Menor idade: %d \n", menor);

    puts("");

    printf("Pessoa mais pesada: %s\n", maiorPesoP);
    printf("Maior peso: %f\n", maiorPeso);
    printf("Pessoa mais leve: %s\n", menorPesoP);
    printf("Menor peso: %f\n", menorPeso);

    puts("");

    printf("Pessoa mais alta: %s \n", maiorAlturaP);
    printf("Maior altura: %f \n", maiorAltura);
    printf("Pessoa mais baixa: %s \n", menorAlturaP);
    printf("Menor altura: %f \n", menorAltura);

    return 0;
}
