#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[500];
   int i;
   int max=0;
   int min;

   for(i=0;i<500;i++){
    a[i]=rand() % 500;
   }
   min=a[0];
   for(i=0;i<500;i++){
    if(max<a[i]){
        max=a[i];
    }
    if(min>a[i]){
        min=a[i];
    }
   }
   printf("El numero maximo es %d y el minimo es %d",max,min);

    return 0;
}
