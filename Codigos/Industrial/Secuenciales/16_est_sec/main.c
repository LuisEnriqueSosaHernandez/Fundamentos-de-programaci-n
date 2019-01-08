#include <stdio.h>
#include <stdlib.h>

int main()
{
    double pies;
    printf("Ingrese la medida en pies\n");
    scanf("%lf",&pies);
    printf("Yardas = %lf\n",pies/3);
    printf("Pulgadas = %lf\n",pies*12);
    printf("Centimetros = %lf\n",pies*30.48);
    printf("Metros = %lf\n",pies/3.281);
    return 0;
}
