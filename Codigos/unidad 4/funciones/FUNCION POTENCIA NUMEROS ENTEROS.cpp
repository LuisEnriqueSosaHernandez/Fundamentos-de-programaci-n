//  BLOQUE 1

/* uso de la funcion POTENCIA	numeros enteros*/

/* Programa desarrollado por: ELMERO MERO
	estudiante destacado del primer semestre
   de la carrera de Sistemas computacionales
   comprometido consigo mismo por ser un destacado
   estudiante y un futuro exitoso profesionista  */

// ==================================================================
//  BLOQUE 2

//  DIRECTIVAS DEL PREPROCESADOR


# include <stdio.h>
# include <conio.h>


// ==================================================================
//  BLOQUE 3

/* PROTOTIPOS DE FUNCION, VARIABLES GLOBALES Y MACROS */

int potencia(int base, int exponente);

// ==================================================================

// BLOQUE 4

//    INICIO DE LA FUNCION main()


main() {
int num1, num2;
printf("n\n\t\Introduzca la base: ");
scanf("%d", &num1);
printf("\n\n\tIntroduzca el exponente: ");
scanf("%d", &num2);
printf("\n\n\t%d elevado a %d vale %d", num1, num2, potencia(num1,num2));
getch();
}

//=============================================================================
// BLOQUE 5

// DEFINICION DE FUNCIONES

int potencia(int base, int exponente)
{
int temporal = 1; /* Valor que voy hallando */
int i; /* Para bucles */
for(i=1; i<=exponente; i++) /* Multiplico "n" veces */
temporal *= base; /* Y calculo el valor temporal */
return temporal; /* Tras las multiplicaciones, */
} /* obtengo el valor que buscaba */







