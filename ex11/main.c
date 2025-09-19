#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, resultado;
    int opcao;
    printf("informe o primeiro numero:");
    scanf("%f", &n1);
    printf("informe o segundo numero:");
    scanf("%f", &n2);
    printf("escolha uma opcao:\n");
    printf("1 - soma\n");
    printf("2 - diferença\n");
    printf("3 - produto\n");
    printf("4 - divisao\n");
    scanf("%d", &opcao);
    switch(opcao){
    case 1:
    resultado = n1 + n2;
    printf("o resultado eh: %f", resultado);
    break;
    case 2:
        if(n1 > n2){
            resultado = n1 - n2;
            printf("o resultado eh %f", resultado);
        }else{
            resultado = n2 - n1;
            printf("o resultado eh %f", resultado);
            break;
        }
    case 3:
        n1 * n2;
        printf("o resultado eh %f", resultado);
        break;
    case 4:
        if(n2 != 0){
        resultado =  n1 / n2;
        printf("o resultado eh %f", resultado);
        }else{
        printf("o denominador nao pode ser zero.\n");
        break;
           default: printf("opcao invalida");
    }





    }
    return 0;
}
