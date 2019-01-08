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
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
             if(strcmp(control[i],caos[j])==0){
                 printf("Repetido %s\n",control[i]);
             }
        }
    }
    return 0;
}
