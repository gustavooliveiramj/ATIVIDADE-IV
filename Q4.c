#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
struct dados_bancario
{
    char nome[150];
    char numero[150];
    char tipoConta[150];
    float saldo;
    float transferencia;
    float depositado;
};

float dados_deposito(float valorinicial, float valordeposito)
{
    return valorinicial + valordeposito;
}

float sacar(float valorinicial, float valorsaque)
{
    return valorinicial - valorsaque;
}

int main(){
  setlocale(LC_ALL,"portuguese");
    int opcao;
    float deposito, saque;
    struct dados_bancario contabancaria;

    do
    {
        printf("---Conta Bancaria----\t\n");
        printf("1 | Entrar na minha conta|\n");
        printf("2 | Depositar |\n");
        printf("3 | Saque|\n");
        printf("4 | Sair do programa|\n");
        printf("-----------------------------\t\n");
       
        printf("\n\n");
        printf("Selecione a opcao desejada: ");
        scanf("%d", &opcao);
        system("cls||clear");
       setbuf(stdin,0);
        switch (opcao)
        {
        case 1:
            fflush(stdin);

            printf("Nome do titular: ");
            gets(contabancaria.nome);

            printf("Numero da conta: ");
            gets(contabancaria.numero);

            printf("Tipo de conta: ");
            gets(contabancaria.tipoConta);

            printf("Informe o saldo atual: ");
            scanf("%f", &contabancaria.saldo);

            system("cls || clear");

            break;

        case 2:
            printf("Quanto voce deseja depositar: ");
            scanf("%f", &contabancaria.depositado);

            deposito = dados_deposito(contabancaria.saldo, contabancaria.depositado);

            printf("Nome do titular: %s\n", contabancaria.nome);
            printf("Numero da conta: %s\n", contabancaria.numero);
            printf("Tipo da conta: %s\n", contabancaria.tipoConta);
            printf("Saldo pre-deposito: %.2f\n", contabancaria.saldo);
            printf("Saldo atual da conta: %.2f\n\n", deposito);

            break;

        case 3:
            printf("Quanto voce deseja sacar: ");
            scanf("%f", &contabancaria.transferencia);

            saque = sacar(contabancaria.saldo, contabancaria.transferencia);

            printf("Titular: %s\n", contabancaria.nome);
            printf("Numero da sua conta: %s\n", contabancaria.numero);
            printf("conta %s\n", contabancaria.tipoConta);
            printf("Saldo anterior: %.2f\n", contabancaria.saldo);
            printf("Saldo atual: %.2f\n\n", saque);

            break;
        case 4:
            printf("Encerrando Programa!");
            break;
        default:
            break;
        }
    } while (opcao != 4);

    return 0;
}