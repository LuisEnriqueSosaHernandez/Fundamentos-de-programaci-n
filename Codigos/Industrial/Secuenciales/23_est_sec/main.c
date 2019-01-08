#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i;
   double sueldo=15000;
   int numero_ventas;
   double sueldo_total=sueldo;
   double venta;
   printf("Introduzca el numero de ventas:\n");
   scanf("%d",&numero_ventas);
   for(i=0;i<numero_ventas;i++)
    {
    printf("Introduzca el precio de la venta %d:\n",(i+1));
   scanf("%lf",&venta);
   sueldo_total+=venta*.3;
   }
   sueldo_total-=sueldo_total*.18;
   printf("El sueldo total es %.2lf:\n",sueldo_total);
    return 0;
}
