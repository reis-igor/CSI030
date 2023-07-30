#include <stdio.h>

int main() {
    float saldoinic, saldo, valor;
    int operacao;

    printf("Digite o saldo inicial da conta: ");
    scanf("%f", &saldoinic);
    
    saldo = saldoinic;

    do {
        printf("\nTipo de operacao:\n");
        printf("1 - Deposito\n");
        printf("2 - Saque\n");
        printf("3 - Saldo\n");
        printf("4 - Fim\n");
        printf("Digite o tipo de operacao: ");
        scanf("%d", &operacao);

        switch (operacao) {
            case 1:
                printf("Digite o valor do deposito: ");
                scanf("%f", &valor);

                if (valor > 0) {
                    saldo += valor;
                    printf("Deposito realizado\n");
                } else {
                    printf("Valor invalido para deposito!\n");
                }
                break;
            
            case 2:
                printf("Digite o valor do saque: ");
                scanf("%f", &valor);

                if (valor > 0) {
                    if (valor <= saldo) {
                        saldo -= valor;
                        printf("Saque realizado com suceso!\n");
                    } else {
                        printf("Saldo insuficiente para saque!\n");
                    }
                } else {
                    printf("Valor invalido para saque!\n");
                }
                break;
            case 3:
                printf("\nSeu saldo e %.2f", saldo);
                break;

            case 4:
                printf("\nOperacao finalizada!\n");
                break;
            
            default:
                printf("Operacao invalida!\n");
        }

    } while (operacao != 4);

    printf("\nSaldo final da conta: %.2f\n", saldo);

    if (saldo == 0) {
        printf("CONTA ZERADA\n");
    } else if (saldo < 0) {
        printf("CONTA NEGATIVADA\n");
    } else {
        printf("CONTA OPERACIONAL\n\n");
    }

    return 0;
}
