#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arreglo[5]={32,15,96,27,10};
    int mayor=0;
    int x;
    for(x=0;x<10;x++){

    if(arreglo[x]>arreglo[mayor]){
        mayor=x;
    }
    }
    printf("El numero mayor es: %d",arreglo[mayor]);
    printf("\n\n Y esta en la posicion: %d",mayor);
    return 0;
}

