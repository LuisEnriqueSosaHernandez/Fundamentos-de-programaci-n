#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* (a[50])[31];
    double temp[31];
    int i;
    double max=0;
    char day[50];
    int puntero=0;
    for(i=0;i<31;i++){
        printf("Ingrese el dia:\n");
        scanf("%s",&a[i]);
        printf("Ingrese la temperatura en celsius\n");
        scanf("%lf",&temp[i]);
        if(max<temp[i]){
            max=temp[i];
        puntero=i;
        }
    }
    printf("El dia con la temperatura maxima fue el %s y estuvo a %lf grados celsius",a[puntero],max);
    return 0;
}
