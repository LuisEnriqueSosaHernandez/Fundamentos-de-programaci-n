//  BLOQUE 1

/* uso de la funcion POTENCIA	numeros reales*/

/* Programa desarrollado por: ELMERO MERO
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

float potencia(float , int );
char Hola(void);
char nombre[40];



//============================================================================
// BLOQUE 4

//    INICIO DE LA FUNCION main()

main()
{

int num2;
float num1;
char respuesta;

Hola();
do
{
clrscr();
printf("\n\n\t%s por favor introduzca la base: ",nombre);
scanf("%f", &num1);
printf("\n\n\t%s seria tan amable de introducir el exponente: ",nombre);
scanf("%d", &num2);
printf("\n\n\tEstimado(a) %s %.2f elevado a %d vale %.2f", nombre,num1, num2, potencia(num1,num2));
getch();
clrscr();
printf("\n\n\t%s deseas calcular otra potencia?\n\n\tS  ==> si\n\n\tN  ==> no\n\n\t", nombre);
do
{
scanf(" %c",&respuesta);
if (respuesta != 's' && respuesta != 'n')
			printf("\n\n\tEleccion erronea debe de ser s o n ");
}
while(respuesta != 's' && respuesta != 'n');
}
while(respuesta == 's' || respuesta == 'S');
}

//=============================================================================
// BLOQUE 5

// DEFINICION DE FUNCIONES

float potencia(float base, int exponente)
{
float pote = 1; /* Valor que SE VA RECALCULANDO */
int i; /* Para el control del for (bucle)*/
for(i=1; i<=exponente; i++) /* Multiplico "n" veces */
pote *= base; /* Y calculo el valor temporal */
return pote; /* Tras las multiplicaciones, obtengo el valor que buscaba */
}

char Hola(void)
{
printf("\n\n\tComo te llamas? ");
scanf("%s",&nombre);
printf("\n\n\t%s que bueno que estas aprendiendo el lenguaje \"C\"",nombre);
getch();
return 0;
}
