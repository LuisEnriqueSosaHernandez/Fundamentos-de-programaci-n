#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t\t\t\t\tEXAMEN\n\n");
    int arregloA[5]={32,15,96,27,10};
    int mayor=0;
    int x;
    for(x=0;x<5;x++){

    if(arregloA[x]>arregloA[mayor]){
        mayor=x;
    }
    }

    printf("El numero mayor es: %d",arregloA[mayor]);
    printf("\n\nY esta en la posicion: arregloA[%d]",mayor);
    printf("\n\n");
    printf("\nLOS NUMEROS PARES SON \n");

   for(x=0;x<5;x++){

    if (x%2==0)
    {
       printf("\n%d arregloA[%d] ",arregloA[x],x);
    }

}
printf("\n\nEL VALOR CUADRADO\n");
 int c=0;
 for(x=0;x<5;x++){

        c=arregloA[x]*arregloA[x];
        printf("\narregloA[%d] Valor Cuadrado %d",x,c);

}

}






