#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float p, n, f;
    int i=1;
    printf("Ingrese el capital invertido para el calculo: ");
    scanf("%f", &p);
    printf("A\xA4o\t\tAcumulado a fin de a\xA4o\n");
    while (i<=20)
    {
        f = p*(pow((1+0.20), i));
        printf("\n%d \t\t%.2f", i, f);
        i++;
    }
    return 0;
}
