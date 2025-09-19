#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;
    double peso, media, soma1, soma2, soma3, soma4;
    for(int i = 1; i <= 5; i++){
        printf("informe a idade:");
        scanf("%d", &idade);
        printf("informe o peso:");
        scanf("%lf", &peso);

         if(idade <=10 && idade >= 1){
        cont1++;
        soma1 += peso;
        }else if(idade <= 20 && idade >= 11){
        cont2++;
        soma2 += peso;
        }else if(idade <=30 && idade >= 21){
        cont3++;
        soma3 += peso;
    }    else{
        cont4++;
        soma4 += peso;
    }

}

      if (cont1 > 0)
        printf("Média de peso (1 a 10 anos): %.2f\n", soma1 / cont1);
    else
        printf("Nenhuma pessoa na faixa de 1 a 10 anos.\n");

    if (cont2 > 0)
        printf("Média de peso (11 a 20 anos): %.2f\n", soma2 / cont2);
    else
        printf("Nenhuma pessoa na faixa de 11 a 20 anos.\n");

    if (cont3 > 0)
        printf("Média de peso (21 a 30 anos): %.2f\n", soma3 / cont3);
    else
        printf("Nenhuma pessoa na faixa de 21 a 30 anos.\n");

    if (cont4 > 0)
        printf("Média de peso (31 anos ou mais): %.2f\n", soma4 / cont4);
    else
        printf("Nenhuma pessoa na faixa de 31 anos ou mais.\n");



    return 0;
}
