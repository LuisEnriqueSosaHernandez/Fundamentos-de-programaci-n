//guarda en un array numeros pares los primeros 100 numeros pares
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
int main(){

int i,x,tabla[100];
i=0;
for(x=1;x<=100;x++){

    if (x%2==0)
    {
       tabla[i]=x;
       i++;
    }

}
for(x=0;x<i;x++){
printf("%d\n",tabla[x]);
}
}

