#include <stdio.h>
#include <stdlib.h>

int main()
{
    double r_total;
    int cant1;
    int cant2;
    int cant3;
    int cant4;
    int cant5;
    printf("Ingresa la recaudacion total\n");
    scanf("%lf",&r_total);
    r_total=r_total*.6;
    printf("Ingresa los acertantes categoria 1\n");
    scanf("%d",&cant1);
    printf("Ingresa los acertantes categoria 2\n");
    scanf("%d",&cant2);
    printf("Ingresa los acertantes categoria 3\n");
    scanf("%d",&cant3);
    printf("Ingresa los acertantes categoria 4\n");
    scanf("%d",&cant4);
    printf("Ingresa los acertantes categoria 5\n");
    scanf("%d",&cant5);

    printf("Cantidad por acertante categoria 1 = %.2lf\n",(r_total/5)/cant1);
    printf("Cantidad por acertante categoria 2 = %.2lf\n",(r_total/5)/cant2);
    printf("Cantidad por acertante categoria 3 = %.2lf\n",(r_total/5)/cant3);
    printf("Cantidad por acertante categoria 4 = %.2lf\n",(r_total/5)/cant4);
    printf("Cantidad por acertante categoria 5 = %.2lf\n",(r_total/5)/cant5);
    return 0;
}
