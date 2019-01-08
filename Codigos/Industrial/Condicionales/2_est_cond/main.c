#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    printf("Ingrese a\n");
    scanf("%d",&a);
    printf("Ingrese b\n");
    scanf("%d",&b);
    if(a>b){
        printf("El numero mayor es: %d",a);
    }else if(a<b){
        printf("El numero mayor es: %d",b);
    }else{
        printf("Los numeros son iguales");
    }
    return 0;
}
