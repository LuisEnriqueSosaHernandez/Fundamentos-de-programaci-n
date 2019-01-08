#include <stdio.h>
#include <stdlib.h>

int main()
{
    int segundos;
    printf("Ingrese los segundos \n");
    scanf("%d",&segundos);
        printf("%d:%d",segundos/60,segundos%60);
    return 0;
}
