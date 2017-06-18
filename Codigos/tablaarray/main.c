//Rellena un arreglo con los primeros 100 numeros y los muetsra en orden ascendente
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
int x,arreglo[100];
for(x=1;x<=100;x++)
{
    arreglo[x]=x;
}
for(x=1;x<=100;x++){

printf("%d\n",arreglo[x]);
}
system("pause");
return (0);
}
