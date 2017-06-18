#include <stdio.h>
#include <stdlib.h>

int main()
{
int n;
    int arreglo[]={1,2,3,4,5,7,8,9,10,11};
    int x;

    printf("Cuantas datos vas a capturar? ");
scanf("%d",&n);
for(x=0;x<n;x++){
    printf("Dame el dato %d: ",x+1);
    scanf("%d",&arreglo[x]);
}
printf("Los datos de arreglo son en vertical:");
for(x=0;x<n;x++){
        printf("%d ",arreglo[x]);
}
printf("\n\nLos datos de arreglo son en horizontal:\n");
for(x=0;x<n;x++){
        printf("%d \n",arreglo[x]);
}
system("pause");
    return 0;

}
