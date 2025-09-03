#include <stdio.h>
#include <stdlib.h>




int main() {
    int prato, sobremesa, bebida;
    int calorias = 0;

    printf("Escolha um prato:\n1-Vegetariano(180)\n2-Peixe(230)\n3-Frango(250)\n4-Carne(350)\n");
    scanf("%d", &prato);

    printf("Escolha uma sobremesa:\n1-Abacaxi(75)\n2-Sorvete diet(110)\n3-Mousse diet(170)\n4-Mousse chocolate(200)\n");
    scanf("%d", &sobremesa);

    printf("Escolha uma bebida:\n1-Cha(20)\n2-Suco de laranja(70)\n3-Suco de melao(100)\n4-Refrigerante diet(65)\n");
    scanf("%d", &bebida);

    // pratos
    switch (prato) {
        case 1: calorias += 180; break;
        case 2: calorias += 230; break;
        case 3: calorias += 250; break;
        case 4: calorias += 350; break;
    }

    // sobremesas
    switch (sobremesa) {
        case 1: calorias += 75; break;
        case 2: calorias += 110; break;
        case 3: calorias += 170; break;
        case 4: calorias += 200; break;
    }

    // bebidas
    switch (bebida) {
        case 1: calorias += 20; break;
        case 2: calorias += 70; break;
        case 3: calorias += 100; break;
        case 4: calorias += 65; break;
    }

    printf("Total de calorias da refeicao: %d cal\n", calorias);

    return 0;
}
