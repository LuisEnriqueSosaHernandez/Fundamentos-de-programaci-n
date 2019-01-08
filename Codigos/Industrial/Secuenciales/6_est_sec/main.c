#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a;
    double b;
    printf("Ingrese decimal 1:\n");
    scanf("%lf",&a);
    printf("Ingrese decimal 2:\n");
    scanf("%lf",&b);
    printf("\n%.2lf\n",a);
    printf("+\n");
    printf("%.2lf\n",b);
    printf("=\n");
    printf("%.2lf",a+b);
    return 0;
}
