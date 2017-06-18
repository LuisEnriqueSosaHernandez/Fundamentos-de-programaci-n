/* PROGRAMA PAR IMPAR  */

# include <stdio.h>
# include <conio.h>

main()
{

int numero, resultado;

printf("\n\n\tDame un numero y te dire si es PAR ");
scanf("%d",&numero);

resultado = numero%2;

if (resultado == 0)

		printf("\n\n\n\tEl numero %d fue PAR ",numero);

getch();
}  // FIN DE LA FUNCION main