#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    printf("Ingrese el numero 1\n");
    scanf("%d",&a);
    scanf("Ingrese el numero 2\n");
    scanf("%d",&b);
    printf("El producto es: %d\n",a*b);
    printf("El cociente es: %d\n",a/b);
    printf("El resto es: %d\n",a%b);
    return 0;
}
