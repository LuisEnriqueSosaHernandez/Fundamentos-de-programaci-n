/*    Uso de la funcion area de un triangulo, area de
 un circulo y la funcion HOLA  */

# include <stdio.h>
# include <conio.h>

/*    BLOQUE 3     */

char HOLA(void);

float A_triangulo(float x, float y);

float A_circulo(float x);

char nombre[40];

# define PI 3.1416


main()
{

float  base, altura, radio;

char respuesta, opcion;

HOLA();

do
{
clrscr();
printf("\n\n\tA  Area triangulo\n\n\tB Area del"
"circulo");
printf("\n\n\t%s Que deseas calcular ",nombre);
scanf(" %c",&opcion);

switch(opcion)
{
case 'A':
case 'a':

printf("\n\n\t%s dame el valor de la base y el valor de la altura ", nombre);
scanf("%f%f",&base,&altura);

printf("\n\n\t%s el area del triangulo con base = %.2f y altura = %.2f,"
 "\n\n\tvale %.2f ",nombre, base,altura,A_triangulo(base, altura));

break;


case 'B':
case 'b':

printf("\n\n\t%s dame el valor del radio ", nombre);
scanf("%f",&radio);

printf("\n\n\t%s el area del circulo con radio = %.2f,"
 "\n\n\tvale %.2f ",nombre,radio,A_circulo(radio));

break;

default: printf("\n\n\tEleccion erronea ");

}
getch();
do
{
clrscr();
printf("\n\n\t%s deseas hacer otro calculo\n\n\tS    si\n\n\tN    no ",nombre);
scanf(" %c",&respuesta);
}
while ( respuesta != 's' && respuesta !='n' );
}

while( respuesta == 's');

}



/*      BLOQUE 5  */

char HOLA(void)
{
printf("\n\n\tComo te llamas? ");
scanf("%s",&nombre);
printf("\n\n\t%s que bueno que estas aprendiendo el lenguaje \"C\"",nombre);
getch();
return 0;
}


float A_triangulo(float a, float b)
{

return  a*b/2.0;
}

float A_circulo(float x)
{
return PI*x*x;
}














