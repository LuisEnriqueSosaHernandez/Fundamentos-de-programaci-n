#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a;
    double b;
    double c;
    double p;
    double ar;
    printf("Ingrese lado a\n");
    scanf("%lf",&a);
    printf("Ingrese lado a\n");
    scanf("%lf",&b);
    printf("Ingrese lado a\n");
    scanf("%lf",&c);
    p=(a+b+c)/2;
    ar=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("El area del rectangulo es: %.2lf",ar);
    return 0;
}
