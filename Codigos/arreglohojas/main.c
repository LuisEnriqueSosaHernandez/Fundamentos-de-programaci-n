#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arreglo[10],x;
    for(x=0;x<10;x++){
    printf("Dame el dato [%d]: ",x+1);
    scanf("%d",&arreglo[x]);
}
printf("Los datos de arreglo son en vertical:");
for(x=0;x<10;x++){
        printf("%d ",arreglo[x]);
}
printf("\n\nLos datos de arreglo son en horizontal:\n");
for(x=0;x<10;x++){
        printf("%d \n",arreglo[x]);
}
system("pause");
    return 0;

}
