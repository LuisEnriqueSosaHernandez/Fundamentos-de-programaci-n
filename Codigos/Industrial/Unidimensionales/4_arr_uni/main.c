#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20];
    int i;
    for(i=0;i<20;i++){
        printf("Inserte el valor %d\n",i);
        scanf("%d",&a[i]);
    }
     for(i=20;i>=0;i--){
        printf("%d \n",a[i]);
    }
    return 0;
}
