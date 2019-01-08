#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a;
   printf("Inserta el radio de la corona circular:\n");
   scanf("%lf",&a);
   printf("El area de la corona es: %.2lf cm2",3.1416*pow(a,2));
    return 0;
}
