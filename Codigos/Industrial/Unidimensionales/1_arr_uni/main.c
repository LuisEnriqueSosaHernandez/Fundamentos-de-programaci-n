#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    int b[10];
    int c[10];
    int i,j;
    for(i=0;i<10;i++){
        printf("Ingrese valor arreglo a posicion %d\n",i);
        scanf("%d",&a[i]);
    }
     for(i=0;i<10;i++){
        printf("Ingrese valor arreglo b posicion %d\n",i);
        scanf("%d",&b[i]);
    }
    j=9;
    for(i=0;i<10;i++){
        c[i]=a[i]*b[j];
        j--;
    }
     for(i=0;i<10;i++){
        printf("%d ",c[i]);
    }
    return 0;
}
