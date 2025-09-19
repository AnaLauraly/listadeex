#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, soma = 0, media, cont = 0;
    do{
        printf("informe um numero:");
        scanf("%d", &num);
       if(num != -99){
        soma = soma + num;
        cont++;
       }

    }while(num != -99);
    media = soma / cont;
    printf("a soma dos numero eh: %d\n", soma);
     printf("a media dos numero eh: %d\n", media);
    return 0;
}
