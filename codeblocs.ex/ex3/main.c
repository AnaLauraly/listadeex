#include <stdio.h>
#include <stdlib.h>



int main() {
    float num1, num2;
    int opcao;

    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

    printf("\nEscolha uma opcao:\n");
    printf("1 - Soma\n");
    printf("2 - Diferenca (maior - menor)\n");
    printf("3 - Produto\n");
    printf("4 - Divisao (num1 / num2)\n");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Soma = %.2f\n", num1 + num2);
            break;
        case 2:
            if (num1 > num2)
                printf("Diferenca = %.2f\n", num1 - num2);
            else
                printf("Diferenca = %.2f\n", num2 - num1);
            break;
        case 3:
            printf("Produto = %.2f\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0)
                printf("Divisao = %.2f\n", num1 / num2);
            else
                printf("Erro: denominador nao pode ser zero.\n");
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}


