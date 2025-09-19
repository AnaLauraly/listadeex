#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, maior, menor; /
    for (int i = 1; i <= 10; i++) {
            printf("digite um numero:");
        scanf("%d", &n);
        if (i == 1) { maior = menor = n; }
        else {
            if (n > maior) maior = n;
            if (n < menor) menor = n;
        }
    }
    printf("Maior = %d | Menor = %d\n", maior, menor);
    return 0;
}
