//Este programa realiza la media de x numeros introducidos por el teclado
#include<stdio.h>
int main(){
    int i,x,tot,suma,media;
    printf("Ingresa la cantidad de numeros para la media: ");
    scanf("%i",&x);
    i=0;
    suma=0;
    while(i < x){
        printf("Ingresa el numero %i: ",i+1);
        scanf("%i",&tot);

        suma+=tot;
        i++;
    }
    media=suma/x;
    printf("la media de los numeros es: %i\n",media);
    system("pause");
    return 0;

}
