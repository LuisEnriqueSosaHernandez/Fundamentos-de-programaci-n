/*  FUNCIONES, POTENCIA, AREA CIRCULO, AREA TRIANGULO, Y LA
		FUNCION HOLA */

# include <stdio.h>
# include <conio.h>


int pot(int x, int y);
float A_circulo(float r);
float A_triangulo(float base, float altura);
char Hola(void);

char nombre[40];

# define pi 3.1416


main()
{

int base,exp,pote;
float rad,basse,altura,AreaCir,AreaTrian;
char opcion,respuesta = 's';

while(respuesta == 's')
{
clrscr();
printf("\n\n\tSelecciona la opcion de calculo a realizar ");
printf("\n\n\tA) POTENCIA\n\n\tB) Area del circulo"
		"\n\n\tC) Area del triangulo\n\n\t");

scanf(" %c",&opcion);

switch(opcion)
{

case 'A':
case 'a':

printf("\n\n\tDame la base? ");
scanf("%d",&base);

printf("\n\n\tDame el exponente? ");
scanf("%d",&exp);

pote = pot(base,exp);

printf("\n\n\tLa potencia %d de %d es = %d",exp,base,pote);

break;

case 'C':
case 'c':

printf("\n\n\tDame la base? ");
scanf("%f",&basse);

printf("\n\n\tDame altura? ");
scanf("%f",&altura);

AreaTrian = A_triangulo( basse,altura);

printf("\n\n\tEl area del triangulo con base %.2f y"
			"altura %.2f es = %.2f",basse,altura,AreaTrian);
break;

case 'B':
case 'b':

printf("\n\n\tDame el radio? ");
scanf("%f",&rad);

AreaCir = A_circulo( rad);

printf("\n\n\tEl area del circulo con radio %.2f es = %.2f",rad,AreaCir);
break;

default: printf("\n\n\tEleccion erronea");

}
getch();
clrscr();

printf("\n\n\tDeseas hacer otros calculo?\n\n\tS  ==> si\n\n\tN  ==> no\n\n\t");
do
{
 scanf(" %c",&respuesta);
 if (respuesta != 's' && respuesta != 'n')
 			printf("'n\n\tcaracter erroneo, debe ser s o n");
}
while (respuesta != 's' && respuesta != 'n');
}  // fin del while
}  // fin del main


//   FUNCION POTENCIA
int pot( int base, int exponente)
{
int potencia=1, n;
for(n=1; n<= exponente ; n++)
potencia*=base;
return potencia;
}

//  FUNCION AREA DEL TRIANGULO

float A_triangulo(float b, float a)
{
float AT;
AT =  b * a/2.0;
return AT;
}



//  FUNCION AREA DEL CIRCULO

float A_circulo(float r)
{
return pi*r*r;
}
