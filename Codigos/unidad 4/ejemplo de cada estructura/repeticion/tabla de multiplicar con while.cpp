/* programa que calcula las tablas de multiplcar */

# include <stdio.h>
# include <conio.h>

main()
{

int n=1,tabla;

printf("\n\n\tCual tabla deseas calcular? ");
scanf("%d",&tabla );

while(n<=10)
{
printf("\n\n\t%2d  X  %2d   =  %2d",tabla,n,n*tabla);
++n;
}
getch();
}