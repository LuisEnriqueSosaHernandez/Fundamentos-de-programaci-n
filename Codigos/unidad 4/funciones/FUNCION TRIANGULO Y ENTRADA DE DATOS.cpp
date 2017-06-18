// BLOQUE  1

/* FUNCION AREA DE TRIANGULO Y DUNCION ENTRADA DE DATOS

/* Programa desarrollado por: ELMERO MERO
	estudiante destacado del primer semestre
   de la carrera de Sistemas computacionales
   comprometido consigo mismo por ser un destacado
   estudiante y un futuro exitoso profesionista  */

//=============================================================================
//  BLOQUE 2

//  DIRECTIVAS DEL PREPROCESADOR


# include <stdio.h>
# include <conio.h>


//=============================================================================
// BLOQUE 3

/* PROTOTIPOS DE FUNCION, VARIABLES GLOBALES Y MACROS */

float Area_triangulo( float x, float y);  //  FUNCION

float entrada(void);                      //  FUNCION

# define A_Triangulo(b,a) b*a/2           //  MACRO


//=============================================================================
// BLOQUE 4

//    INICIO DE LA FUNCION main()

main()
{
 float base, altura;

 printf("\n\n\tDame la base del triangulo ");
 base = entrada();
 printf("\n\n\tDame la altura del triangulo ");
 altura = entrada();
 printf("\n\n\tEl area del trinangulo  vale %.2f",Area_triangulo(base,altura));

 printf("\n\n\t(MACRO) El area del trinangulo  vale %.2f",A_Triangulo(base,altura));

 getch();
 }                    // FIN DE LA FUNCION main()

 //============================================================================
 // BLOQUE 5
 // DEFINICION DE FUNCIONES

 float Area_triangulo(float a, float b)
 {
 return (a*b)/2;
 }

 float entrada(void)
 {
 float m;

 do
 {
 printf("\n\n\tEl dato debe ser > a 0 ");
 scanf("%f",&m);
 }
 while(m<= 0);
 return m;
 }
