#include <stdio.h>
# include <conio.h>


int main(){

    int x,y,z;

    printf ("\n\n\tEscribe el primer lado ");
    scanf("%i",&x);
    printf ("\n\n\tEscribe el segundo lado ");
    scanf("%i",&y);
    printf ("\n\n\tEscribe el tercer lado ");
    scanf("%i",&z);

    printf("\n\n\n"); //Saltar tres líneas

    /*Comprobación de si es un tiángulo,
    damos por hecho que los números son positivos */
    if ((x+y>z) && (x+z>y) && (y+z)>x){

        if (x==y && x==z) printf ("Equilátero");

        	else

        		if (x==y || x==z || y==z) printf ("Isósceles");

        			else printf("Escaleno");

    }
    else

        printf("Esos valores no forman un triángulo");
getch();
}