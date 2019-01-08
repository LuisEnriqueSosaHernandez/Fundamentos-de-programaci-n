#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;
    double resultado;
    printf("Inserta x1:\n");
    scanf("%lf",&x1);
    printf("Inserta y1:\n");
    scanf("%lf",&y1);
    printf("Inserta x2:\n");
    scanf("%lf",&x2);
    printf("Inserta y2:\n");
    scanf("%lf",&y2);
    printf("Inserta x3:\n");
    scanf("%lf",&x3);
    printf("Inserta y3:\n");
    scanf("%lf",&y3);
    resultado=(((x1*y2)+(x2*y3)+(x3*y1))-((x1*y3)+(x3*y2)+(x2*y1)))/2;
    printf("El area del triangulo es: %.2lf",resultado);
    return 0;
}
