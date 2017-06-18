/* Area de un triangulo
Programa: Un buen programador
Informacion: Este programa calcula el area de un triangulo dando
la base y la altura del triangulo, aplicando la siguiente formula

						A=(base*altura)/2					*/

#include <stdio.h>
# include <conio.h>


/*    PROTOTIPOS DE FUNCIONES Y

		DECLARACION DE VARIABLES GLOBALES	*/

char   Hola();     // FUNCION Hola()

char	nombre[40];    //  VARIABLE GLOBAL


main()

{

float altura=0, base=0;

float area;

Hola();

printf("\n%s dame la base del triangulo = ",nombre);

scanf("%f",&base);

printf("\nAhora dame la altura del triangulo = ");

scanf("%f",&altura);

area= 0.5 * altura * base;

printf("\n%s el area del triangulo = %f\n",nombre,area);

getch();
}

	/* DEFINICION DE LA FUNCION HOLA */

 char Hola(void)
 {
  printf("\n\n\tDame tu nombre ");
 scanf("%s",&nombre);
 printf("\n\n\tBienvenido %s a este programa que calcula el area de un triangulo\n",nombre );
 return  0;
 }
