#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>


int main()
{
    setlocale(LC_ALL, "portuguese");
    int i, j;
    char nome[5][200];
    int idade[5];
    float notas[5][3];
    float soma = 0;
    float media[5];

    for (i = 0; i < 3; i++)
    {
        printf("\n");
        printf("Digite o nome do %d° aluno: ", i+1);
        gets(nome[i]);

        fflush(stdin);

        printf("Digite sua idade:");
        scanf("%d", &idade[i]);

       system("cls");
       
        for (j = 0; j < 3; j++)
        {
            printf("Digite sua %dÂ° nota :", j + 1);
            scanf("%f", &notas[i][j]);

            soma += notas[i][j];
        }
        media[i] = soma / j;
        soma = 0;
        fflush(stdin);
    }

    for (i = 0; i < 3; i++)
    {
        printf("\n");
        printf("Nome: %s \n", nome[i]);
        printf("Idade: %d \n", idade[i]);

        for (j = 0; j < 3; j++)
        {
        printf("Notas: %.1f \n", notas[i][j]);
        }
        printf("Media: %.1f \n", media[i]);
        {
            if (media[i] >= 7)
            {
                printf("aprovado \n");
            }

            else if (media[i] >= 5 && media[i] < 7)
            {
                printf("Recuperação \n");
            }
            else
            {

                printf("Reprovado \n");
            }
        }
    }

    
    return 0;
}