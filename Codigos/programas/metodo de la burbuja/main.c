//intercambiar los valores de dos numeros enteros introcidos por el teclado
//metodo de la burbuja
#include<stdio.h>
int main()
{
    int x,y,aux;
    printf("El valor de x es: ");
    scanf("%i",&x);
    printf("El valor de y es: ");
    scanf("%i",&y);
    aux = x;
    x = y;
    y = aux;
    printf("El valor de x es:%i\n""El valor de y es:%i\n",x,y);
    system("pause");
    return 0;
    }
