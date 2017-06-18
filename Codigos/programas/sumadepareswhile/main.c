//Este programa muestra la suma de los numeros pares entre 2 y 2000 con while
#include <stdio.h>
int main()
{
    float i,suma;
    suma = 0;
    i=2;
    while(i<=2000){
        suma+=i;
        i+=2;
    }
    printf("El resultado de la suma es: \n%f\n",suma);
system("pause");
    return 0;
}
