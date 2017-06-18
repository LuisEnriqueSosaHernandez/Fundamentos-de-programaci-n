/*     par o impar o cero   */

# include <conio.h>
# include <stdio.h>


main()
{

int numero;

printf("\n\n\tDame un numero y te dire si es par, impar o cero ");
scanf("%d",&numero);

if ( numero == 0)
				printf("\n\n\tEl numero introducido es CERO ");
else
{
if (numero%2 == 0)
			printf("\n\n\tel numero %d es par ",numero);

else
      	printf( "\n\n\tel numero %d es impar ",numero);
}
getch();

}
