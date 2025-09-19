#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float a, b, c, media;
    printf("informe o valor de i:");
    scanf("%d", &i);
    printf("informe os valores de a, b, c:" );
    scanf("%f %f %f", &a, &b, &c);
    if(i % 2 == 0){
        media = (a + b + c)/ 3;
        printf("a media eh de %f", media);
    }else if(i>10){
        media = (a*2 + b*3 + c*4)/9.0;
        printf("a media ponderada eh de %f", media);
    }else{
    printf("nao ah operacao definida para %i", i);
    }

    return 0;
}
