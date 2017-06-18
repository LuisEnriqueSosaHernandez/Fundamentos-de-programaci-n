#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>


int main()
{
   int calif[]={90,89,78,67,89,78,98,100,60,77};

   int n;
   int x;
   float suma=0;
   for(n=0;n<10;n++){


  suma=suma+calif[n];
   }
   printf("Las calificaciones ya estan registradas\n");

   printf("Calculando el promedio");
   for(x=0;x<3;x++)
   {
       printf(".");
       Sleep(500);

   }


   printf("\nEl promedio de las calificaciones es: %.2f\n",suma/10);

printf("\n\n\n\n");
int Ncalif;
printf("Cuantas calificaciones vas a capturar? ");
scanf("%d",&Ncalif);
suma=0;
for(n=0;n<Ncalif;n++){
    printf("Dame la calificacion %d: ",n+1);
    scanf("%d",&calif[n]);
suma=suma+calif[n];
}
printf("Calculando el promedio");
   for(x=0;x<3;x++)
   {
       printf(".");
       Sleep(500);

   }
printf("\nEl promedio de las calificaciones que capturaste es: %.2f\n\n",suma/Ncalif);
system("pause");
return(0);
}



