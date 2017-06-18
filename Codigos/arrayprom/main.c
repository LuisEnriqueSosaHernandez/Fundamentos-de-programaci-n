#include <stdio.h>
#include <stdlib.h>

int main()
{
   float prom,calif[5];
    int x;
    printf("Programa que muestra y calcula el promedio de 5 calificaciones insertadas por teclado\n");
    for(x=0;x<5;x++)
    {
        printf("Dame la calificacion %d: ",x+1);
        scanf("%f",&calif[x]);
        prom+=calif[x];
        }

        printf("\n\n");
        printf("El promedio es: %.2f:\n\n ",prom/5);
        system("pause");
        return 0;
}
