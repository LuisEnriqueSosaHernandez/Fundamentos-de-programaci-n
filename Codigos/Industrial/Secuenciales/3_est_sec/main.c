#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double ladoa;
    double ladob;
    double hipotenusa;
    printf("Inserte el lado a:\n");
    scanf("%lf",&ladoa);
    printf("Inserte el lado b:\n");
    scanf("%lf",&ladob);
    hipotenusa=pow(ladoa,2)+pow(ladob,2);
    printf("La hipotenusa es %f ",hipotenusa);
    return 0;
}
