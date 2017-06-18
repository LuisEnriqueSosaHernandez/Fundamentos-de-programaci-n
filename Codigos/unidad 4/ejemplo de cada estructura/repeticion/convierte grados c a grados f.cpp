/*   programa que convierte grados c a grados f */

# include <stdio.h>
# include <conio.h>



main()
{

int n, vinicial,vfinal,incremento;

char opcion;

printf("\n\n\tPara convertir °C a °F teclea F");
printf(" \n\n\tPara convertir °F a °C teclea C ");
scanf("%c",&opcion);

switch(opcion)
{
case 'F':
case 'f':

printf("\n\n\tDame la temperatura en grados centigrados inicial ");
scanf("%d",&vinicial);

printf("\n\n\tDame la temperatura en grados centigrados final ");
scanf("%d",&vfinal);

printf("\n\n\tDame el incremento de la tabla en grados centigrados ");
scanf("%d",&incremento);
printf("\n\n\t   °C        °F \n\n");
printf("\n\n\t =================\n\n");
for(n = vinicial;n <= vfinal;n = n+incremento)
{
printf("\n\n\t    %2d        %.2f ",n,1.8*n+32);
}

break;

case 'C':
case 'c':

printf("\n\n\tDame la temperatura en grados farengeith inicial ");
scanf("%d",&vinicial);

printf("\n\n\tDame la temperatura en grados farengeith final ");
scanf("%d",&vfinal);

printf("\n\n\tDame el incremento de la tabla en grados farengeith ");
scanf("%d",&incremento);
printf("\n\n\t   °F        °C \n\n");
printf("\n\n\t =================\n\n");
for(n = vinicial;n <= vfinal;n = n+incremento)
{
printf("\n\n\t    %2d        %.2f ",n,1/1.8*(n-32));
}

break;

default:
printf("\n\n\tE R R O R");

getch();
}
getch();
}


