#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arreglo[5]; //={3,5,6,4,-22,766,88,-44,2,1};

    int i;
    int mayor=0,numma=0;



    for (i=0; i<5; i++){
        printf("\n\n\tIntroduce tus 5 numeros: ");
        scanf("%d",&arreglo[i]);
        }


        for (i=0; i<5; i++){
            if (arreglo[i]> mayor){
                mayor = arreglo[i];
                numma=i;
            }

        }
printf("\n\n\tEl numero mayor introducido es %d %d",mayor,numma+1);
getch();
return 0;

}
