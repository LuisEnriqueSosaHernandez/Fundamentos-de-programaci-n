//Este programa realiza la media de x numeros introducidos por el teclado
#include<stdio.h>
int main()
{
    int i,suma,tot,total,media;
    printf("Ingresa la cantidad de numeros para la media :");
    scanf("%i",&tot);
    suma =0;
    for(i=1 ;i<=tot ; i++){
            printf("Introduce el numero %i: ",i);
    scanf("%i",&total);
        suma+=total;
}
    media=suma/tot;
    printf("La media de los numeros es: %i\n",media);
    system("pause");
    return 0;
}
