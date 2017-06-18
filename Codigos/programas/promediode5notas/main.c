#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define a 2
#define n 5
int main()
{


    int nota [a][n],i=0,j=0;
    float promedio[1];
    for(i=0;i<a; i++){
    printf("Calificaciones del alumno %d:\n ",i+1);
    for(j=0;j<n; j++){
        printf("\nDame calificacion del alumno [%d][%d] ",i+1,j+1);
        scanf("%d",&nota[i][j]);
    }

    printf("\n\n");
    }
    promedio[0]=0;

for(i=0;i<a; i++){
         for(j=0;j<n; j++){
                promedio[i]=promedio[i]+nota[i][j];
         }
           printf("\n\n El promedio del alumno %.d es: %.2f\n\n",i+1, promedio[i]/5);
             }

    system("pause");
    return 0;
}
