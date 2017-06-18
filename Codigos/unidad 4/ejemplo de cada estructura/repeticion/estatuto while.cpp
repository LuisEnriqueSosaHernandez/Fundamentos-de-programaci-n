#include <stdio.h>
#include <conio.h>

main()
{
int numero;
printf("\n\n\tTeclea un numero (0 para salir): ");
scanf("%d", &numero);
while (numero!=0)
{
if (numero > 0) printf("\n\n\tEs positivo\n");
else printf("\n\n\tEs negativo\n");
printf("\n\n\tTeclea otro numero (0 para salir): ");
scanf("%d", &numero);
}
getch();
}