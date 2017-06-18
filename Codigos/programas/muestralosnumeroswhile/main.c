//Lee dos numeros y muestra todos los numeros entre estos con bucle whilw
#include<stdio.h>
int main()
{
    int x,y,i;
    printf("Introduce un numero: ");
    scanf("%i",&x);
    printf("Introduce un numero mayor al anterior: ");
    scanf("%i",&y);

    //bucle while
    i = x +1;
    printf("Los numeros entre estos dos son:\n");
    while(i < y){
    printf("%i,",i);
    i++;
    }

    printf("\n");
    system("pause");
    return 0;
}
