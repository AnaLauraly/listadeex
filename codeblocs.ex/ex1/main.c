#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    float a, b, c, media;

    printf("Digite um valor inteiro i: ");
    scanf("%d", &i);

    printf("Digite os valores a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (i % 2 == 0) {
        // Se i for par -> média aritmética
        media = (a + b + c) / 3.0;
        printf("Media aritmetica = %.2f\n", media);
    } else if (i > 10) {
        // Se i ímpar e > 10 -> média ponderada
        media = (a*2 + b*3 + c*4) / 9.0;
        printf("Media ponderada = %.2f\n", media);
    } else {
        printf("Nao ha operacao definida para i = %d\n", i);
    }

    return 0;
}


