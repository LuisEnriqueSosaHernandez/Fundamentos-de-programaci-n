#include <stdio.h>
#include <ctype.h>

int main()
{
   char cadena[50];
   int i;

   printf("\nEscribe un letra o frase: ");
   scanf("%s", &cadena);

   for(i = 0; cadena[i]; i++)
      cadena[i] = toupper(cadena[i]);

   printf("\n%s\n", cadena);

    fflush(stdin);
    printf("\nPresiona Intro para finalizar...");
    getchar();
}
