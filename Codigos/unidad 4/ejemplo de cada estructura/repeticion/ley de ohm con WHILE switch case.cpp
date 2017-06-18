#include<stdio.h>
#include<conio.h>

main(){

char respuesta='S';
char eleccion;

float Voltaje,Resistencia,Intencidad,R1,R2,R3,R4,R5;


while (respuesta =='S' || respuesta == 's')
{
printf ("\t Dime que deseas calcular\n");
printf ("\n\tA Calcular Voltaje");
printf ("\n\tB Calcular Resistencia");
printf ("\n\tC Calcular Intencidad");
printf ("\n\tD Calcular Resistencia en serie");
printf ("\n\tE Calcular Resistencia en paralelo\n\n\tCual elijes? ");
//printf ("\n\tY Salir\n\n");
scanf (" %c",&eleccion);


switch (eleccion) {

case 'A':
case 'a':
printf ("Dame la Resistencia\t");
scanf ("%f",&Resistencia);
printf ("Dame el valor de la Intencidad\t");
scanf ("%f",&Intencidad);
printf ("\n\nEl voltaje es=%f",Resistencia*Intencidad);
break;

case 'B':
case 'b':
printf ("Dame el Voltaje\t");
scanf ("%f", &Voltaje);
printf ("Dame el valor de la Intencidad\t");
scanf ("%f",&Intencidad);
printf ("\n\nLa Resistencia es=%f",Voltaje/Intencidad);
break;

case 'C':
case 'c':
printf ("Dame el Voltaje\t");
scanf ("%f",&Voltaje);
printf ("Dame la Resistencia\t");
scanf ("%f",&Resistencia);
printf ("\n\nLa intencidad es=%f",Voltaje/Resistencia);
break;

case 'D':
case 'd':
printf("Dame la R1\t");
scanf ("%f",&R1);
printf ("Dame la R2\t");
scanf ("%f",&R2);
printf ("Dame la R3\t");
scanf ("%f",&R3);
printf ("Dame la R4\t");
scanf ("%f",&R4);
printf ("Dame la R5\t");
scanf ("%f",&R5);
printf ("\n\nLa Resistencia en serie =%f",R1+R2+R3+R4+R5);
break;

case 'E':
case 'e':
printf("Dame la R1\t");
scanf ("%f",&R1);
printf("Dame la R2\t");
scanf ("%f",&R2);
printf("Dame la R3\t");
scanf ("%f",&R3);
printf("Dame la R4\t");
scanf ("%f",&R4);
printf("Dame la R5\t");
scanf ("%f",&R5);
printf("\n\nLa Resistencia en Paralelo es = %.2f",1/(1/R1+1/R2+1/R3+1/R4+1/R5));
break;

default : printf("\n\nEleccion erronea ");
}

printf("\n\nDeseas hacer otra operacion\n\n");
printf("S:si \n\nN:no\n\n");
scanf(" %c",&respuesta);
//printf("\nLa respuesta es %c ",respuesta);
//respuesta=getch();
clrscr();
}

getch ();
}