#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50];
    int i;
    int media=0;
    for(i=0;i<50;i++){
        printf("Ingresa valor \n");
        scanf("%d",&a[i]);
        media+=a[i];
    }
    media/=50;
    for(i=0;i<50;i++){
        if(a[i]>media){
            printf("%d\n",a[i]);
        }
    }

    return 0;
}
