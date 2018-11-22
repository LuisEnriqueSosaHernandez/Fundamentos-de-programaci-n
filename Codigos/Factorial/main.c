#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Algoritmo que obtiene el factorial de un número ingresado por el usuario!\n");
    int n,n2,c,fact=1;
    printf("Ingresa un numero por favor: ");
    scanf("%d",&n);
    while(n<0){
    printf("Ingresa un numero por favor:");
    scanf("%d",&n);
    }
    //Se agrega n2, para imprimir el numero que introdujo originalmente el usuario, por que si es cero
    //el valor de n cambia a 1 y se imprimria 1 en vez de cero y luego el factorial y seria incoherente
    n2=n;
    if(n==0){
        n=1;
    }
    for(c=1;c<=n;c++){
        fact*=c;
    }
    printf("**** El factorial de %d es %d ****\n",n2,fact);
    return 0;
}
