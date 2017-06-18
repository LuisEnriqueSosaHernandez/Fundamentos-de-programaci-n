//Calculamos el factorial con una funcion
#include <stdio.h>
 int factorial(int a);
int main()
{
    printf("Cacula el factorial de dos numeros\n");
    int x,y,fact1,fact2;
    printf("Introduce el primer numero: ");
    scanf("%i",&x);
    printf("Introduce el segundo numero: ");
    scanf("%i",&y);
    fact1=factorial(x);
   fact2=factorial(y);
    printf("El resultado de %i es: %i \n",x,fact1);
    printf("El resultado de %i es: %i \n",y,fact2);
    system("pause");

    return 0;
}
int factorial(int a){
    int i,aux;
    aux=1;
for(i=1;i<=a;i++){
    aux=aux*i;
}
return aux;
}
