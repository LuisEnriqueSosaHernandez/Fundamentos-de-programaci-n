//Rutas de escape con el programa de numero primo .Descubre si tu numero es o no es primo
#include <stdio.h>


int main(){
    int x,i,j,aux;
    j=0;
    printf("Ingresa un numero para saber si es o no es primo: ");
    scanf("%i",&x);
    for(i=2;i<x&&j==1;i++) /*con esta comparacion hacemos nuestro programa mas eficiente al hacer que el bucle no se
        repita de manera innecesaria, es nuestra ruta de escape por ejemplo si hubieramos metido un numero muy grande el programa hubiera
        tardado mas tiempo , pero ahora el tiempo se acorto al dejar de repetir el bucle de manera innecesaria con la ruta de escape*/
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
