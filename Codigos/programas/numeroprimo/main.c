//Descubre si tu numero es o no es primo
#include <stdio.h>


int main(){
    int x,i,j,aux;
    j=0;
    printf("Ingresa un numero para saber si es o no es primo: ");
    scanf("%i",&x);
    for(i=2;i<x;i++)
    {
        aux=x%i;
    }

   if (aux==0){
    j=1;
   }

if (j==1){
    printf("El numero %i no es primo ",x);

}
else{
    printf("El numero %i es primo \n",x);
}
system("pause");
return 0;
    }
