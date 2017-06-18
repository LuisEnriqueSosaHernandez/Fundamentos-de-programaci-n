/*Escribir un programa que solicite las horas que lleva realizar un trabajo, la
tarifa a la que se factura la hora y el tanto por ciento del total bruto que se
 retiene como impuestos, e informe del total bruto, de la cantidad retenida como
 impuestos y del total neto a pagar.  */

#include <stdio.h>
#include <conio.h>

char Hola();
char nombre[40];

void main ()

{

   float horas_trabajo,tarifa_hora,tasa_imp;
   float pagobruto,impuesto,pagoneto;

   Hola();

   printf("\n\n%s dame las horas trabajadas ",nombre);
   scanf("%f",&horas_trabajo);

   printf("\n\n%s dame la tarifa por hora ",nombre);
   scanf("%f",&tarifa_hora);

   printf("\n\n%s dame la tasa de impuesto ",nombre);
   scanf("%f",&tasa_imp);

   pagobruto = horas_trabajo * tarifa_hora;

   impuesto = pagobruto * tasa_imp;

   pagoneto = pagobruto - impuesto;

   printf("\n\n\t%s tu ingreso bruto es de = %.2f ",nombre,pagobruto);

   printf("\n\n\t%s tu impuesto es de = %.2f ",nombre,impuesto);

   printf("\n\n\t%s tu ingreso neto es de = %.2f ",nombre,pagoneto);

   getch();

   }


   char Hola()
   {
   printf("\n\nComo te llamas? ");
   scanf("%s",&nombre);
   printf("\n\n%s eres bienvenido(a) a este programa ",nombre);
   return 0;
   }


