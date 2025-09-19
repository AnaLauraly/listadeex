#include <stdio.h>
#include <stdlib.h>

int main()
{
   int base, altura;
   float perimetro, area;
   printf("informe o primeiro a base:");
   scanf("%d", &base);
   printf("informe a altura:");
   scanf("%d", &altura);
   if(base == altura){
    printf("QUADRADO");
   }else{
   perimetro = 2 * (base + altura);
   area = base * altura;
   printf("retangulo: perimetro = %.2f, area = area = %.2f", perimetro, area);



   }
    return 0;
}
