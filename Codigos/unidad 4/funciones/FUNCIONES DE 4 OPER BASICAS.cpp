/* USO DE FUNCIONES: DISEÑO DE FUNCIONES QUE HAGAN LAS
CUATRO OPERACIONES BASICAS */

//  BLOQUE 2

# include <stdio.h>
# include <conio.h>

//   BLOQUE 3
int suma(int x, int y);
int resta(int x, int b);
int multi(int x, int y);
float divi(int x, int y);
char Hola(void);

char nombre[40];

// BLOQUE 4
main()
{
int num , nume , resultado;
float res_div;
char respuesta;

Hola();
do
{
clrscr();
printf("\n\n\t%s dame dos numeros ",nombre);
scanf("%d%d",&num,&nume);
resultado = suma(num,nume);
printf("\n\n\tLa suma de %d + %d vale %d",num,nume,resultado);
resultado = resta(num,nume);
printf("\n\n\tLa resta de %d - %d vale %d",num,nume,resultado);

resultado = multi(num,nume);
printf("\n\n\tLa multiplicacion de %d * %d vale %d",num,nume,resultado);

res_div = divi(num,nume);
printf("\n\n\tLa division de %d / %d vale %.2f",num,nume,res_div);
getch();
clrscr();
printf("\n\n\t%s deseas hacer otro calculo?"
         "\n\n\tS  ==> si\n\n\tN  ==> no \n\n\t",nombre);
do
{
scanf(" %c",&respuesta);
 if(respuesta != 's' && respuesta != 'n')
 				printf("\n\n\tDebe ser un \"s\"  o una \"n\"\n\n\t");
}
while( respuesta != 's' && respuesta != 'n');
}
while(respuesta == 's');

}  //   FIN DEL main()

//  BLOQUE 5
int suma (int n1, int n2)
{
int sum;
sum = n1 + n2;

return sum;
}

int resta (int n1, int n2)
{
int res;
res = n1 - n2;

return res;
}

int multi (int n1, int n2)
{
int res;
res = n1 * n2;

return res;
}

float divi (int n1, int n2)
{
float res;
res =   (float) n1 / n2;

return res;
}

char Hola(void)
{
printf("\n\n\tComo te llamas? ");
scanf("%s",&nombre);
printf("\n\n\t%s vamos a practicar el uso de funciones ",nombre);
return 0;
}


