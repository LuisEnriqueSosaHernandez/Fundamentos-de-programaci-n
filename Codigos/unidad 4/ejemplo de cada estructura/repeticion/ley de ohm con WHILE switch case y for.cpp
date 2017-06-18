/* switch case break default */

# include <stdio.h>
# include <conio.h>



main()
{

float Volt, Int, Resistencia, RTotal_S=0,RTotal_P=0;
int    n, Num_Resist;
char respuesta,eleccion;

do
{
clrscr();
printf ("\t Dime que deseas calcular\n");
printf ("\n\tA Calcular Voltaje");
printf ("\n\tB Calcular Resistencia");
printf ("\n\tC Calcular Intencidad");
printf ("\n\tD Calcular Resistencia en serie");
printf ("\n\tE Calcular Resistencia en paralelo\n\n\tCual elijes? ");
scanf (" %c",&eleccion);
printf("\n\t=========================================");
switch (eleccion) {

case 'A':
case 'a':
printf ("\n\tDame la Resistencia\t");
scanf ("%f",&Resistencia);
printf ("\n\tDame el valor de la Intencidad\t");
scanf ("%f",&Int);
printf("\n\t=========================================");
printf ("\n\n\tEl voltaje es = %f",Resistencia*Int);
break;

case 'B':
case 'b':
printf ("\n\tDame el Voltaje\t");
scanf ("%f", &Volt);
printf ("\n\tDame el valor de la Intencidad\t");
scanf ("%f",&Int);
printf("\n\t=========================================");
printf ("\n\n\tLa Resistencia es=%f",Volt/Int);
break;

case 'C':
case 'c':
printf ("\n\tDame el Voltaje\t");
scanf ("%f",&Volt);
printf ("\n\tDame la Resistencia\t");
scanf ("%f",&Resistencia);
printf("\n\t=========================================");
printf ("\n\n\tLa intencidad es=%f",Volt/Resistencia);
break;

case 'D':
case 'd':
printf("\n\n\tCuantas resistencias en SERIE vas a considerar ");
scanf ("%d",&Num_Resist);

for(n=1; n <= Num_Resist; n=n+1)
{
printf("\n\n\tDame la resistencia %d ",n);
scanf("%f",&Resistencia);
RTotal_S = RTotal_S + Resistencia;
}
printf("\n\t=========================================");
printf ("\n\n\tLa Resistencia en SERIE = %.2f",RTotal_S);
break;

case 'E':
case 'e':
printf("\n\n\tCuantas resistencias en PARALELO vas a considerar ");
scanf ("%d",&Num_Resist);

for(n=1; n <= Num_Resist; ++n)
{
printf("\n\n\tDame la resistencia %d ",n);
scanf("%f",&Resistencia);
RTotal_P = RTotal_P + 1/Resistencia;
}

printf("\n\t=========================================");
printf ("\n\n\tLa Resistencia en PARALELO = %.2f",1/RTotal_P);
break;

default :
printf("\n\t=========================================");
printf("\n\n\tEleccion erronea ");
}

printf("\n\n\tDeseas hacer otra operacion\n\n");
printf("\t\tS:si \n\n\t\tN:no\n\n");
scanf(" %c",&respuesta);
}
while( respuesta == 'S' || respuesta == 's');

}
