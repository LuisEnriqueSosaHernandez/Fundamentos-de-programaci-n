/* positivo, negativo o cero */

#include<stdio.h>
#include<conio.h>

main()
{

int num;

printf("\n\nDame un numero ");
scanf("%d",&num);

if(num > 0)
		printf("\n\nel numero %d es positivo ",num);

      else

      	if(num < 0)
             printf("\n\nel numero %d es negativo ",num);

             else
             		printf("\n\nel numero es cero, numero = %d ",num);

getch();

}

