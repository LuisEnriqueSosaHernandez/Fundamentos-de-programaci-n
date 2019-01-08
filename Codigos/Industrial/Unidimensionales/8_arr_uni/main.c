#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val[300];
    int i;
    int j;
    int num;
    int ocu=0,ocu2=0;
    for(i=0;i<300;i++){
        printf("Inserte valor\n");
        scanf("%d",&val[i]);
    }
    for(i=0;i<300;i++){
     for(j=0;j<300;j++){
            if(val[i]==val[j]){
                ocu2++;
            }
     }
     if(ocu<ocu2){
        ocu=ocu2;
        num=val[i];
     }
     ocu2=0;
    }
    printf("La moda es: %d",num);

    return 0;
}
