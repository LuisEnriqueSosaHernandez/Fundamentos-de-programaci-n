#include <stdio.h>
# include <conio.h>

int main(){

    int x,y,z;

    char resp;


    do {
        clrscr();
        printf ("\n\nEscribe el primer lado ");
        scanf("%i",&x);
        printf ("\n\nEscribe el segundo lado ");
        scanf("%i",&y);
        printf ("\n\nEscribe el tercer lado ");
        scanf("%i",&z);

        printf("\n\n\n"); //Saltar tres líneas

        /*Comprobación de si es un triángulo,
        damos por hecho que los números son positivos */
        if ((x+y>z) && (x+z>y) && (y+z)>x)
        {
            if (x==y && x==z) printf ("\n\nEquilatero");

            	else

            		if (x==y || x==z || y==z) printf ("\n\nIsosceles");

            			else printf("\n\nEscaleno");

        }
        else

            printf("\n\nEsos valores no forman un triangulo");

         

        printf("\n\nDesea hacer otra comparacion (S/N)?) ");
        scanf(" %c",&resp);     // hay que dejar un espacio para que funcione correctamente

    }while (resp!='N' && resp!='n');
getch();

}