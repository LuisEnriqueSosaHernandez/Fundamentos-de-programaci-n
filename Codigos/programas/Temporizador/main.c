#include <stdio.h>
#include <windows.h>
int main()
{
    system("color 6E");
    int i;
    int x;
    x=1000;
    printf("TEMPORIZADOR\n");
    printf("En cuanto segundos quieres iniciar tu temporizador: ");
    scanf("%i",&i);
    printf("Tu tiempo restante\n");
    while(i!=-1){
        Sleep(x);
        printf("%i Segundos \r",i);
         i--;
    }
    printf("\nTu tiempo ha expirado");
    return 0;
}
