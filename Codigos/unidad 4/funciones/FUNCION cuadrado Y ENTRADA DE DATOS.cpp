//  BLOQUE 1

/* uso de la funciones cuadrado y entrada de datos	*/

/* Programa desarrollado por: ELMERO MERO
	estudiante destacado del primer semestre
   de la carrera de Sistemas computacionales
   comprometido consigo mismo por ser un destacado
   estudiante y un futuro exitoso profesionista  */

//=============================================================================
//  BLOQUE 2

//  DIRECTIVAS DEL PREPROCESADOR

#include <stdio.h>
#include <conio.h>


//=============================================================================
//  BLOQUE 3

/* PROTOTIPOS DE FUNCION, VARIABLES GLOBALES Y MACROS */

double cuadrado(float numero);

float entrada();

char Hola();

char nombre[40];

//=============================================================================
// BLOQUE 4

//    INICIO DE LA FUNCION main()

main()
{
float resp, num;
char respuesta;

Hola();

do
{
clrscr();

printf("\n\n\t%s dame el numero que deseas elevar al cuadrado ",nombre);
num = entrada();
resp = cuadrado(num);
printf("\n\n\t%s el cuadrado de %.2f = %.2f",nombre,num, resp);

getch();
clrscr();
printf("\n\n\t%s deseas elevar al cuafrado otro numero?\n\n\tS     si\n\n\tn    no\n\n\t",nombre);
do
{
scanf(" %c",&respuesta);
if(respuesta != 's' && respuesta != 'n')
		printf("\n\n\tEleccion erronea %s debe ser \" s \" o \" n \" ",nombre);
}
while(respuesta != 's' && respuesta != 'n');
}


while(respuesta == 'S' || respuesta == 's');
} /* FIN DEL MAIN */


//=============================================================================
// BLOQUE 5

// DEFINICION DE FUNCIONES

 /* DEFINICION DE LA FUNCION MAXIMO  */

double cuadrado(float x)
{
float result ;
result = x*x;
return result;
}

// DEFINICION DE LA FUNCION ENTRADA (Captura de datos)

float entrada(void)
{
float m;
printf("\n\n\t%s el numero debe ser > a 0 ",nombre);
do
{
scanf("%f",&m );
if( m<=0)
			printf("\n\n\tDebe ser mayor a CERO!!!! %s dame un numero ",nombre);
}
while( m<=0);

return m;
}


//  DEFINICION DE LA FUNCION HOLA
char Hola()
{
printf("\n\n\tDame tu nombre ");
scanf("%s",&nombre);
printf("\n\n\tBienvenido %s ",nombre);
return 0;
}


