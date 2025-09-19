#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, novosalario;
    printf("informe o valor do salario atual:");
    scanf("%f", &salario);
    novosalario = salario * 1.05;
    if(salario <= 750.0){
    novosalario += 100;

    }
    printf("novo salario: %.2f\n", novosalario);
    return 0;
}
