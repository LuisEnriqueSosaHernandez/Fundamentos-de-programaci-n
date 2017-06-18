//  BLOQUE 1

/* PROGRAMA QUE USA MACROS	*/

/* Programa desarrollado por: ELMER OMERO
	estudiante destacado del primer semestre
   de la carrera de Sistemas computacionales
   comprometido consigo mismo por ser un destacado
   estudiante y un futuro exitoso profesionista  */

// ===========================================================================
//  BLOQUE 2

//  DIRECTIVAS DEL PREPROCESADOR


# include <stdio.h>
# include <conio.h>

//============================================================================
//  BLOQUE 3

/* PROTOTIPOS DE FUNCION, VARIABLES GLOBALES Y MACROS */
// DEFINICION DE LAS MACROS

# define PI 3.14159
# define Area_circulo(x) ((PI)*(x)*(x))
# define Cuadrado(n)  n*n


//============================================================================
// BLOQUE 4

//    INICIO DE LA FUNCION main()

main(){

float radio, Area_circ;
printf("\n\nPorporcioname el valor del radio ");
scanf("%f",&radio);
printf("\n\nEl Valor del area del circulo es %.2f ",Area_circulo(radio));
Area_circ = PI * Cuadrado(radio);
printf("\n\nEl Valor del area del circulo es %.2f ",Area_circ);


getch();
}

//=============================================================================
// BLOQUE 5

// DEFINICION DE FUNCIONES
