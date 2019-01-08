#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int aux;
    printf("Ingrese variable a:\n");
    scanf("%d",&a);
    printf("Ingrese variable b:\n");
    scanf("%d",&b);
    printf("Ingrese variable c:\n");
    scanf("%d",&c);
    printf("El valor de a = %d\n",a);
    printf("El valor de b = %d\n",b);
    printf("El valor de c = %d\n",c);
    printf("Intercambiando valores...\n");
    aux=a;
    a=b;
    b=c;
    c=aux;

    printf("El valor de a = %d\n",a);
    printf("El valor de b = %d\n",b);
    printf("El valor de c = %d\n",c);



    return 0;
}
