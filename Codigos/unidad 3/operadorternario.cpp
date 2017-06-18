# include <stdio.h>
# include <conio.h>

main(){

int a,b,z;

printf("Dame dos enteros y te dire cual es el mayor ");
scanf("%d%d",&a,&b);


z = ( a>b ? a : b);

printf("\n\nEl mayor entre %d y %d es %d ",a,b,z);

getch();
}
