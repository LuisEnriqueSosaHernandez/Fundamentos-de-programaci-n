#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a;
    double b;
    printf("Ingresa a:\n");
    scanf("%lf",&a);
    printf("Ingresa b:\n");
    scanf("%lf",&b);
    printf("La suma es: %.2lf\n",a+b);
    printf("La diferencia es: %.2lf\n",a-b);
    printf("El producto es: %.2lf\n",a*b);
    printf("El cociente es: %.2lf\n",a/b);
    return 0;
}
