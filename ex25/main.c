#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao,num;
    double n1, n2, n3, media;
    do{
        printf("1- verificador de numero\n");
        printf("2- calcular media e classificar\n");
        printf("3- sair\n");
        printf("escolha uma opcao:\n");
        scanf("%d", &opcao);
    switch(opcao){
    case 1:{
        printf("informe um numero:");
        scanf("%d", &num);
    if(num == 0){
        printf("o numero eh zero\n");
    }else if(num > 0){
    printf("o numero eh positivo\n");
    }else{
    printf("o numero eh negativo\n");
    }
    break;
    }
    case 2:{
        printf("informe tres notas:\n");
        scanf("%lf %lf %lf", &n1, &n2, &n3);
        media = (n1 + n2 + n3) / 3;
        printf("a media das notas eh: %.2lf\n", media);
        if(media >= 7){
            printf("aprovado!\n");
        }
        else if(media >= 5 && media < 7){
            printf("recuperacao!\n");
        }else if(media < 5){
        printf("reprovado!\n");
        }
    break;
    }
    case 3:{
    printf("saindo!\n");
    break
    }
    default:{
    printf("nao existe essa opcao");
    }

    }

    }while(opcao != 3);
    return 0;
}
