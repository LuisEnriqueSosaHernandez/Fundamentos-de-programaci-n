#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=5;
    int b=10;
    int aux=0;
    printf("Los valores actuales son a = %d b = %d \n",a,b);
    printf("Intercambiando valores...\n");
    aux=a;
    a=b;
    b=aux;
    printf("Los valores intercambiados son a = %d b = %d ",a,b);
    return 0;
}
