#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<locale.h>

struct dados_alunos
{
    char nascimento[200];
    char nome[200];
    float nota[5];
    float media;
};


float calcularMedia(float numero[])
{
    int i;
    float soma = 0, media;

    for (i = 0; i < 2; i++)
    {
        soma += numero[i];
    }
    return media = soma / 2;
}

char *situacao(float valor)
{
    char situacao[200];

    if (valor >= 7)
    {
        strcpy(situacao, "Aprovado");
    }
    else
    {
        strcpy(situacao, "Reprovado");
    }

    return situacao;
}

int main(){

    int i, j;
    struct dados_alunos aluno[5];

    for (i = 0; i < 5; i++)
    {
        printf("Nome do %d° estudante: ", i + 1);
        gets(aluno[i].nome);
        printf("Data de nascimento: ");
        gets(aluno[i].nascimento);

        for (j = 0; j < 2; j++)
        {
            
            
                printf("Digite a %d° nota: ", j + 1);
                scanf("%f", &aluno[i].nota[j]);
                
        }
        setbuf(stdin,0);

        aluno[i].media = calcularMedia(aluno[i].nota);
    }

    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("Nome do %d° estudante: %s\n", i + 1, aluno[i].nome);
        printf("Data de nascimento: %s\n", aluno[i].nascimento);
        for (j = 0; j < 2; j++)
        {
            printf("%d° nota: %.2f\n", j + 1, aluno[i].nota[j]);
        }
        printf("Media: %.2f\n", aluno[i].media);
        printf(" %s\n\n", situacao(aluno[i].media));
    }

    return 0;
}