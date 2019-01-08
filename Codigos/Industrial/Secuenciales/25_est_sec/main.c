#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double r1;
    double r2;
    double h;
    double v;
    printf("Inserte R1:\n");
    scanf("%lf",&r1);
    printf("Inserte R2:\n");
    scanf("%lf",&r2);
    printf("Inserte H:\n");
    scanf("%lf",&h);
    v=((float)1/3)*3.1416*(pow(r1,2)+(r1*r2)+pow(r2,2))*h;
    printf("El area del cono truncado es %lf",v);
    return 0;
}
