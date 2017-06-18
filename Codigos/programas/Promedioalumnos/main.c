#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float n, p;
    printf("Introduzca la estatura de 10 alumnos\n\n");
    for(i=1; i<=10; i++)
    {
       printf("Estatura %d: ", i);
       scanf("%f", &n);
       p += n;
    }


        printf("\nEl promedio de las estaturas es: %.2f", p/10);

    return 0;
}
