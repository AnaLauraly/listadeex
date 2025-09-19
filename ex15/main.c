#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, resultado = 1;
    printf("informe o valor de x:");
    scanf("%d", &x);
    printf("informe o valor de y:");
    scanf("%d", &y);

    for(int i = 1; i <= y; i++){
        resultado = resultado * x;


    }
    printf("o resultado eh: %d\n", resultado);
    return 0;
}
