//Lee dos numeros y muestra todos los numeros entre estos con bucle for
#include<stdio.h>
int main()
{
    int x,y,i;
    printf("Introduce un numero: ");
    scanf("%i",&x);
    printf("Introduce un numero mayor al anterior: ");
    scanf("%i",&y);

    //bucle for
    printf("Los numeros comprendidos entre estos dos son:\n");
    for (i = x + 1 ; i < y ; i++){
        printf("%i,",i);
    }
    printf("\n");
    system("pause");
    return 0;
}
