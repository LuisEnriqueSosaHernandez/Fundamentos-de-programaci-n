/*  CALCULA  LA RESISTENCIA TOTAL EN SERIE Y EN PARALELO */

#include <stdio.h>
# include <conio.h>


main()
{

float resistencia, RtotalS=0,RtotalP=0;
int n,num_RESIST;

printf("\n\nDime cuantas resistencias deseas calcular? ");
scanf("%d",&num_RESIST);

for(n=1; n<= num_RESIST;n=n+1)
{
printf("\n\nDame el valor de la resistencia %d ",n);
scanf("%f",&resistencia);

RtotalS = RtotalS + resistencia;

RtotalP = RtotalP + 1/resistencia;

}

printf("\n\n\tEl valor de la resistencia total en serie vale %.2f ",RtotalS);

printf("\n\n\tEl valor de la resistencia total en paralelo vale %.2f ",1/RtotalP);

getch();

}


