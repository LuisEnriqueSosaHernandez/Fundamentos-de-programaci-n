//Este programa imprime la suma de los numeros pares entre dos y mil
#include<stdio.h>
int main()
{
    float i,suma;
    suma = 0;

    for (i=2 ; i<=2000 ; i +=2){
        suma = suma+i;

    }
    printf("El resultado de la suma es:\n%f\n",suma);
    system("pause");
    return 0;
}
