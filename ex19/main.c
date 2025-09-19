#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10, soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    printf("Soma de 1 ate %d = %d\n", n, soma);
    return 0;

}
