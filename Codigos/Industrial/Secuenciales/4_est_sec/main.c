#include <stdio.h>
#include <stdlib.h>

int main()
{
    double anchura;
    double longitud;
    double superficie;
    printf("Inserte la longitud:\n");
    scanf("%lf",&longitud);
    printf("Inserte la anchura:\n");
    scanf("%lf",&anchura);
    superficie=longitud*anchura;
    printf("%.2lf",superficie);
    return 0;
}
