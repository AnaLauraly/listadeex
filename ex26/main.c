#include <stdio.h>
#include <stdlib.h>

int main()
{
     int opcao,num, cont = 0;
    double nota, media, soma;
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
        while(nota != -1){
            printf("informe uma nota:\n");
            scanf("%lf", &nota);

            if(nota >= 0 && nota <= 10){
                    cont++;
            soma = soma + nota;}
        }
        media = soma / cont;
        printf("a media das notas eh: %.2lf", media);

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
    break;
    }
    default:{
    printf("nao existe essa opcao\n");
    }

    }

    }while(opcao != 3);
    return 0;
}
