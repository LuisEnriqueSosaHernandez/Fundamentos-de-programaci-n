#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* (control[50])[2];
    char* (caos[50])[2];
    int i;
    int j;
     for(i=0;i<2;i++){
        printf("Ingresa nombre control:\n");
         scanf("%s",&control[i]);
    }
     for(i=0;i<2;i++){
        printf("Ingresa nombre caos:\n");
        scanf("%s",&caos[i]);
    }
    int bole=0;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
             if(strcmp(control[i],caos[j])==0){
                    bole=1;
                 break;
             }
        }
        if(bole==0){
        printf("control %s\n",control[i]);
        }
        bole=0;
    }
    bole=0;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
             if(strcmp(caos[i],control[j])==0){
                bole=1;
                 break;
             }
        }
        if(bole==0){
        printf("caos %s\n",caos[i]);
        }
        bole=0;
    }
    return 0;
}
