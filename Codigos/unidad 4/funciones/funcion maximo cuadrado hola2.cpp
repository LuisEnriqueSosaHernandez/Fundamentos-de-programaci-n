//  BLOQUE 1

/* uso de la funciones maximo, cuadrado y hola	*/

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

char Hola(void);                   // FUNCION HOLA TIPO char
int maximo(int x, int y, int z);   // FUNCION MAXIMO TIPO int
int cuadrado (int x);              // FUNCION CUADRADO TIPO int

char nombre[40];			           // VARIABLE GLOBAL

# define CUADRADO(n) n*n           // MACRO

//=============================================================================
// BLOQUE 4

//    INICIO DE LA FUNCION main()

main(){

int numero1,numero2,numero3,x;

Hola();            // SE INVOCA A LA FUNCION HOLA()

printf("\n\n%s dame 3 numeros enteros, diferentes ",nombre);
scanf("%d%d%d",&numero1,&numero2,&numero3);

x =  maximo(numero1,numero2,numero3);           //  SE INVOCA A LA FUNCION MAXIMO

printf("\n\n%s el valor maximo de %d  %d  y  %d es %d ",nombre,numero1,numero2,numero3,x);

printf("\n\n%s el cuadrado del valor maximo %d es %d",nombre,x,cuadrado(x));   // SE INVOCA A LA FUNCION CUADRADO

printf("\n\n(MACRO) %s el cuadrado del valor maximo %d es %d",nombre,x,CUADRADO(x));
 getch();
 return 0;
 }       /* FIN DEL MAIN */


//=============================================================================
 // BLOQUE 5

// DEFINICION DE FUNCIONES

 /* DEFINICION DE LA FUNCION MAXIMO  */

 int maximo(int A,int b,int c)
 {
  int max=A;
  	if(max<b)max=b;

      	if(max<c) max=c;

   return max;
  }

  /* DEFINICION DE LA FUNCION CUADRADO */

  int cuadrado(int c)
  {
  int cuadrado;
  cuadrado=c*c;
  return cuadrado;
  }

   /* DEFINICION DE LA FUNCION HOLA */

 char Hola(void)
 {
  printf("\n\n\tDame tu nombre ");
 scanf("%s",&nombre);
 printf("\n\n\tBienvenido %s \n",nombre );
 return  0;
 }
