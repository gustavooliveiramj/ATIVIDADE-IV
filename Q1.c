#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <locale.h>

struct dados_contatos {
    char nome[200];
    char telefone[200];
    char email[200];
};

void pesquisarContato(struct dados_contatos *contatos, char *contato) {
    int i=0;
    for (i = 0; i < 3; i++) {
        if (strcmp(contatos[i].nome, contato) == 0) {
            printf("Nome: %s \n", contatos[i].nome);
            printf("Telefone: %s \n", contatos[i].telefone);
            return;
        }
    }
    printf("Contato n�o encontrado. \n");
}

int main() {
    setlocale(LC_ALL, "portuguese");
   
    struct dados_contatos contatos[3];
    char contato[200];
    int i;
   
   
    for (i = 0; i < 3; i++) {
        printf("\nDigite os dados do %dcontato: \n", i + 1);
        printf("Nome: ");
        gets(contatos[i].nome);
       
        printf("Telefone: ");
        gets(contatos[i].telefone);
       
        printf("E-mail: ");
        gets(contatos[i].email);
    }
   
    printf("\nDigite o nome do contato que deseja pesquisar: ");
    gets(contato);
   
    printf("\n");
}