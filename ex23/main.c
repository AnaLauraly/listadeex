#include <stdio.h>
#include <stdlib.h>

int main()
{
   int maior, menor, opcao, cont = 0;
   float media, nota, soma;
   do{
    printf("1-lance uma nota\n");
    printf("2-media das notas\n");
    printf("3-maior nota\n");
    printf("4-menor nota\n");
    printf("5-sair\n");
    printf("escolha uma das opcoes:\n");
    scanf("%d", &opcao);



   switch(opcao){
   case 1:{

            printf("Digite a nota (0 a 10): ");
            scanf("%f", &nota);

             if(nota >= 0 && nota <= 10){
                    printf("nota valida!!\n");
                    cont++;
                    soma = soma + nota;
                     if (nota > maior) maior = nota;
                     if (nota < menor) menor = nota;
             }else if(nota < 0 || nota > 10){
                printf("nota invalida!\n");
                do{
                     printf("Digite a nota (0 a 10): ");
                     scanf("%f", &nota);


                }while(nota < 0 || nota > 10);

             }

      break;
      }
      case 2:{
         if(cont > 0){
            media = soma / cont;
            printf("a media das notas eh: %f\n", media);
         }else{
         printf("nenhuma nota lancada ainda\n");}
      break;
      }
      case 3:{
          if (cont > 0) {
                    printf("Maior nota: %.2d\n", maior);
                } else {
                    printf("Nenhuma nota lançada ainda.\n");
                }
                break;
      }
      case 4:{
      if (cont > 0) {
                    printf("Menor nota: %.2d\n", menor);
                } else {
                    printf("Nenhuma nota lançada ainda.\n");
                }
                break;
      }
      case 5:{
      printf("Encerrando o programa. Ate logo!\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
        }
      }


   }while(opcao != 5);
    return 0;
}
