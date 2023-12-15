#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
typedef struct {
    int numeroConta;
    char nomeTitular[100];
    float saldo;
    char tipoConta[20];
} ContaBancaria;

void depositar(ContaBancaria *conta, float valor) {
    conta->saldo += valor;
}

void sacar(ContaBancaria *conta, float valor) {
    if (valor <= conta->saldo)
        conta->saldo -= valor;
    else
        printf("Saldo insuficiente!\n");
}

void imprimirSaldo(ContaBancaria conta) {
    printf("Saldo atual: %.2f\n", conta.saldo);
}

int main() {
    setlocale(LC_ALL,"portuguese");
    ContaBancaria conta;
    int opcao;
    float valor;

    printf("Número da conta: ");
    scanf("%d", &conta.numeroConta);
    printf("Nome do titular: ");
    scanf(" %[^\n]s", conta.nomeTitular);
    printf("Saldo inicial: ");
    scanf("%f", &conta.saldo);
    printf("Tipo de conta (poupança ou corrente): ");
    scanf(" %[^\n]s", conta.tipoConta);

    while (1) {
        printf("\n--- MENU DE OPERAÇÕES ---\n");
        printf("1. Depositar\n");
        printf("2. Sacar\n");
        printf("3. Imprimir saldo\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nValor a depositar: ");
                scanf("%f", &valor);
                depositar(&conta, valor);
                printf("Depósito realizado com sucesso!\n");
                break;
            case 2:
                printf("\nValor a sacar: ");
                scanf("%f", &valor);
                sacar(&conta, valor);
                break;
            case 3:
                printf("\n");
                imprimirSaldo(conta);
                break;
            case 0:
                printf("\nEncerrando programa...\n");
                exit(0);
            default:
                printf("\nOpção inválida!\n");
        }
    }

    return 0;
}

