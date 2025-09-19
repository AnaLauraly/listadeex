#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao, num, multi, i = 1, n1, n2, n3;
    double media, soma;
do{
        printf("1- verificar se numero eh par ou impar\n");
        printf("2- Calcular tabuada de um numero\n");
        printf("3- Calcular media de tres notas\n");
        printf("4- sair\n");
        printf("escolha uma das opcoes:");
        scanf("%d", &opcao);

        switch(opcao){
        case 1:{
        printf("escolha um numero:");
        scanf("%d", &num);
            if(num % 2 == 0){
            printf("o numero escolhido eh par\n");
            }else{
            printf("o numero eh impar\n");
            }
            break;
        }
        case 2:{
        printf("escolha um numero:");
        scanf("%d", &num);
            for(i = 1; i <= 10; i++){
                multi = num * i;
                 printf("a tabuada do numero eh: %d x %d = %d\n", num, i, multi);
            }

            break;
        }
        case 3:{
          printf("informe tres notas:");
          scanf("%d %d %d", &n1, &n2, &n3);
          media = (n1 + n2 + n3) / 3;
          printf("a media das notas eh: %.2lf\n", media);

            break;


        }
        case 4:{
        printf("saindo...\n");
        break;
        }

        default:{
        printf("nao existe essa opcao\n");
        }

        }
}while(opcao != 4);
    return 0;
}
