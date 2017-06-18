//En este programa se ven los bucles anidados con el ejemplo de las tablas de multiplicar
#include<stdio.h>
int main()
{
    int i,j,x;
    for(i=1 ;i<=10;i++){
        for(j=1;j<=10;j++){
            x=i*j;
printf ("%i x %i = %i \n",i,j,x);//se puede quitar la operacion x=i*j; y la variable x simplemente haciendo esto
//printf ("%i * %i = %i \n",i,j,i*j);
}
printf("\n");
system("pause");
    }
    system("pause");
    return 0;


}
