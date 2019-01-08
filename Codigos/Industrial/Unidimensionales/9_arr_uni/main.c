#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* (a[50])[25];
    char* (b[50])[25];
    char c[50];
    int i;
    int j;
    int bole=0;

    for(i=0;i<25;i++){
        printf("Ingrese el nombre\n");
        scanf("%s",&a[i]);
        printf("Ingrese el numero\n");
        scanf("%s",&b[i]);
    }
    printf("Buscar nombre\n");
    scanf("%s",&c);
    for(i=0;i<25;i++){
        if(strcmp(c,a[i])==0){
            printf("El numero es: %s",b[i]);
            bole=1;
        }
    }
    if(bole==0){
         printf("No existe");
    }
    return 0;
}
