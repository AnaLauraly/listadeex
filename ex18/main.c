#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int n, qtd;
    float soma = 0;
    printf("Quantos numeros? ");
    scanf("%d", &qtd);
    for (int i = 1; i <= qtd; i++) {
        printf("Digite o %d° numero: ", i);
        scanf("%d", &n);
        soma += n;
    }
    printf("Media = %.2f\n", soma/qtd);

    return 0;
}


