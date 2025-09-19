#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade, i;
    double peso;

    // acumuladores e contadores separados
    double somaCriancas = 0, somaAdolescentes = 0, somaAdultos = 0;
    int contCriancas = 0, contAdolescentes = 0, contAdultos = 0;

    for (i = 1; i <= 5; i++) {
        printf("\nInforme a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        printf("Informe o peso: ");
        scanf("%lf", &peso);

        // separando em faixas etárias
        if (idade <= 10) {
            somaCriancas += peso;
            contCriancas++;
        } else if (idade <= 20) {
            somaAdolescentes += peso;
            contAdolescentes++;
        } else {
            somaAdultos += peso;
            contAdultos++;
        }
    }

    // calcular e mostrar médias
    if (contCriancas > 0)
        printf("\nA media dos criancas eh: %.2f", somaCriancas / contCriancas);
    else
        printf("\nNao houve criancas cadastradas.");

    if (contAdolescentes > 0)
        printf("\nA media dos adolescentes eh: %.2f", somaAdolescentes / contAdolescentes);
    else
        printf("\nNao houve adolescentes cadastrados.");

    if (contAdultos > 0)
        printf("\nA media dos adultos eh: %.2f", somaAdultos / contAdultos);
    else
        printf("\nNao houve adultos cadastrados.");

    return 0;
}

