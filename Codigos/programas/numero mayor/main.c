/*EL SIGUIENTE PROGRAMA CALCULARA EL NUMERO MAYOR*/
#include <stdio.h>
#include <conio.h>

int main()
{

int n, numx, i, mayor=0;
char resp='s';
while (resp=='s'){
    /*n=cantidad de numeros a ingresar,numx=numero x que se ingresara, mayor=0 ya que el mayor debe ser el minimo numero para numx pueda remplazarlo*/
printf("\n\n\tIngresar la cantidad de numeros: ");
scanf("%d",&n);
for (i=1; i<=n; i++)
/*abrimos el proceso for para ingresar los numeros que vamos a utilizar, i sera entero y sera de 1 hasta que llegue al valor n, aumentara de 1 en 1*/
{
 printf("\n\n\tIngrese %d numero: ",i);
 scanf("%d", &numx);
 if (numx > mayor)
 {
  mayor = numx;
 }
}

printf("\n\n\t El numero mayor es: %d ", mayor);

printf("\n\n Desea hacer otro calculo si=s/no=x...: ");
scanf(" %c",&resp);
}
getch();
return 0;
}




