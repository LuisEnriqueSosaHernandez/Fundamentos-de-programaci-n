#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x;
    double y;
    printf("Ingrese el valor de x:\n");
    scanf("%lf",&x);
    printf("Ingrese el valor de y:\n");
    scanf("%lf",&y);
    printf("x / y = %.2lf\n",x/y);
     printf("x %% y = %d",(int)x%(int)y);
    return 0;
}
