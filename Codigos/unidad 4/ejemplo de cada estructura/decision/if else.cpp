#include <stdio.h>
#include <conio.h>
main()
{
int numero;
printf("Escriba un n�mero: ");
scanf("%d", &numero);
if (numero < 0)
printf("El numero es negativo.\n");
else
if (numero == 0)
printf("El numero es cero.\n");
else
printf("El numero es positivo.\n");
getch();
}