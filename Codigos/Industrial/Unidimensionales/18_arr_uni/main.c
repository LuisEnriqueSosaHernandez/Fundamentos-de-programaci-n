#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* (name[50])[2];
    char* (sex[50])[2];
    char* (hombre[50])[2];
    char* (mujer[50])[2];

    int i,contm=0,conth=0;

    for(i=0;i<2;i++){
        printf("Ingresa nombre\n");
        scanf("%s",&name[i]);
        printf("Ingresa sexo\n");
        scanf("%s",&sex[i]);
    }
    for(i=0;i<2;i++){
        if(strcmp("h",sex[i])==0){
          hombre[conth]=name[i];
        }else{
            mujer[contm]=name[i];
        }
    }
    printf("Hombres");
     for(i=0;i<2;i++){
        printf("%s",hombre[i]);
    }
     printf("Mujeres");
     for(i=0;i<2;i++){
        printf("%s",mujer[i]);
    }
    return 0;
}
