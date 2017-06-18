#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
   int calif[]={90,89,78,67,89,78,98,100,60,77};

   int n;
   float suma=0;
   for(n=0;n<10;n++){


    suma=suma+calif[n];
   }
   printf("Las calificaciones ya estan registradas\n");

   printf("Calculando el promedio...\n\n");
   Sleep(1000);
   printf("El promedio de las calificaciones es: %.2f\n",suma/10);
    return 0;
}
