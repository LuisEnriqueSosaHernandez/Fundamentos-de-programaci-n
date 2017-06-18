/*Si a una temperatura expresada en grados Fahrenheit se le resta 32 y el resultado
 se multiplica por 5/9 se obtiene la temperatura en grados centígrados.
Escribir un programa que solicite una temperatura en grados Fahrenheit y diga a
 cuántos grados centígrados equivale. */


#include <stdio.h>
#include <math.h> 
#include <conio.h>
void main ()

{

   /*Se definen las variables que se utilizan en el programa*/
   float fahrenheit;
   float centigrados;

   /*comienzan las instrucciones del programa*/

   printf ("\a\n\n\n\nEl programa consiste en calcular la temperatura en grados centigrados\na partir de la temperatura en grados farenheit\n\n\n");

   /*datos de entrada: valor de la temperatura en grados Fahrenheit*/
   printf("Introduzca el valor de la temperatura en grados Fahrenheit: ");
   scanf("%f", &fahrenheit);

   /*proceso de datos: calculo la temperatura en grados centigrados*/
   centigrados=(fahrenheit-32)*5/9;
   
   /*salida de datos: se imprime el resultado en la pantalla*/
   printf("\n\nLa temperatura en grados centigrados es: %f", centigrados);

   /*fin del programa*/
   getch();

}


