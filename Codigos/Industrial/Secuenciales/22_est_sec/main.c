#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anio;
    printf("Ingresa el anio: \n");
    scanf("%d",&anio);
    if(anio%100!=0){
        printf("El siglo es %d",(anio/100)+1);
    }else{
        printf("El siglo es %d",anio/100);
    }
    return 0;
}
