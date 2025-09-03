#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <math.h>

int main() {
    int h1, m1, h2, m2;
    int minutosChegada, minutosSaida, totalMinutos, horas;
    float total = 0;

    printf("Digite a hora e minuto de chegada (hh mm): ");
    scanf("%d %d", &h1, &m1);

    printf("Digite a hora e minuto de partida (hh mm): ");
    scanf("%d %d", &h2, &m2);

    minutosChegada = h1 * 60 + m1;
    minutosSaida   = h2 * 60 + m2;

    // Se a saída for no dia seguinte
    if (minutosSaida <= minutosChegada) {
        minutosSaida += 24 * 60;
    }

    totalMinutos = minutosSaida - minutosChegada;

    // Arredondando para cima as horas
    horas = (int)ceil(totalMinutos / 60.0);

    if (horas <= 2) {
        total = horas * 1.0;
    } else if (horas <= 4) {
        total = 2 * 1.0 + (horas - 2) * 1.40;
    } else {
        total = 2 * 1.0 + 2 * 1.40 + (horas - 4) * 2.0;
    }

    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}
