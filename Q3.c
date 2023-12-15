#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct dados_produtos
{
    int qtd;
    float preco;
    char nome[200];
};

int dadosProdutos(int qtd)
{
    int dadosEstoque = 100;
    return dadosEstoque -= qtd;
}

float dadosEstoque(float dinheiro, float cifra)
{
    return dinheiro * cifra;
}

int main (){
    int opcao, qtd;
    float estoque;
    struct dados_produtos produto;

    // Comandos

    do
    {
        
        printf("-----Selecione uma das opcoes-----\t\n");
        printf("   1   | Realizar uma compra\n");
        printf("   2   | Consultar estoque\n");
        printf("   3   | Sair do programa\n");
        printf("-----------------------------------");

        printf("\n\n");
        setbuf(stdin,0);
        printf("Selecione a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            setbuf(stdin,0);
            printf("\nDigite o nome do produto: ");
            gets(produto.nome);
            printf("Digite a qtd adquirida: ");
            scanf("%d", &produto.qtd);
            printf("Digite o valor do produto: ");
            scanf("%f", &produto.preco);

            

            qtd = dadosProdutos(produto.qtd);
            estoque = dadosEstoque(produto.preco, produto.qtd);
            break;

            

        case 2:

            
            printf("Nome do produto: %s\n", produto.nome);
            printf("qtd no estoque: %d\n", qtd);
            printf("Valor do estoque em produtos: R$ %.2f\n", estoque);
            break; 
            setbuf(stdin,0);


        case 3:
            
            printf("Encerrando Programa!");
            break;
            }

    } while (opcao != 3);

    return 0;
}