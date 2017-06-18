/* CALCULA EL PROMEDIO DE 5 CALIFICACIONES  */

#include <stdio.h>
#include <conio.h>

main()
{

int cal1,cal2,cal3,cal4,cal5;
float promedio;

printf("\n\n\nDame la Calificacion 1 ");
scanf("%d",&cal1);

printf("\n\n\nDame la Calificacion 2 ");
scanf("%d",&cal2);

printf("\n\n\nDame la Calificacion 3 ");
scanf("%d",&cal3);

printf("\n\n\nDame la Calificacion 4 ");
scanf("%d",&cal4);

printf("\n\n\nDame la Calificacion 5 ");
scanf("%d",&cal5);

promedio =  ( cal1+cal2+cal3+cal4+cal5)/5.0;

if (promedio >= 60)
{
printf("\n\n\n\tA P  R  O  B  A  D  O ");

printf("\n\n\n\tEl promedio de las 5 calificaciones es %.2f ",promedio);
}

else

{
printf("\n\n\n\tR  E  P  R  O  B  A  D  O ");

printf("\n\n\n\tEl promedio de las 5 calificaciones es %.2f ",promedio);
}

getch();

}
