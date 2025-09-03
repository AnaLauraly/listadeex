#include <stdio.h>
#include <stdlib.h>


int main() {
    float base, altura;

    printf("Digite a base e a altura: ");
    scanf("%f %f", &base, &altura);

    if (base == altura) {
        printf("QUADRADO\n");
    } else {
        float perimetro = 2 * (base + altura);
        float area = base * altura;
        printf("Retangulo: Perimetro = %.2f, Area = %.2f\n", perimetro, area);
    }

    return 0;
}


