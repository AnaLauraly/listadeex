#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
    float salario, novoSalario;

    printf("Digite o salario atual: R$ ");
    scanf("%f", &salario);

    novoSalario = salario * 1.05; // aumento de 5%

    if (salario <= 750.0) {
        novoSalario += 100.0; // abono
    }

    printf("Novo salario: R$ %.2f\n", novoSalario);

    return 0;
}

