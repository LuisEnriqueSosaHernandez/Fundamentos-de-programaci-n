//  BLOQUE 1

/* uso de la funcion FACTORIAL	numeros enteros*/

/* Programa desarrollado por: ELMERO MERO
	estudiante destacado del primer semestre
   de la carrera de Sistemas computacionales
   comprometido consigo mismo por ser un destacado
   estudiante y un futuro exitoso profesionista  */

// ==================================================================
//  BLOQUE 2

//  DIRECTIVAS DEL PREPROCESADOR

#include <stdio.h>
#include <conio.h>

// ==================================================================
//  BLOQUE 3

/* PROTOTIPOS DE FUNCION, VARIABLES GLOBALES Y MACROS */

double fact(int n);


// ==================================================================

// BLOQUE 4

//    INICIO DE LA FUNCION main()

main()
{
int num,n;
double fac=1;
printf("\n\n\tIntroduzca un numero entero menor de 70: ");
scanf("%d", &num);
for(n=1;n<=num;++n)
fac *= n;
printf("\n\n\tEl factorial (con for) es: %.0f\n", fac);
printf("\n\n\tSu factorial (con funcion recursiva) es: %.0f\n", fact(num));
getch();
}

//=============================================================================
// BLOQUE 5

// DEFINICION DE FUNCIONES

double  fact(int n)      // FUNCION RECURSIVA
{
if (n==1) /* Aseguramos que termine */
return 1;
return n * fact (n-1); /* Si no es 1, sigue la recursión */
}