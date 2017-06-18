#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
    int HORAS;
    float SBRUTO,TARIFA,IMPUESTOS,SNETO;
    char resp='s';
    while (resp=='s'){

        printf("n\n\tDame el total de tus horas:");
        scanf("%d",&HORAS);

         printf("n\n\tDame tu tarifa:");
        scanf("%d",&TARIFA);

 if (HORAS<=35){

    SBRUTO =HORAS * TARIFA;
    printf("n\n\tTu salario bruto es %.2f",SBRUTO);
 }

 else if (HORAS>35){
    SBRUTO = 35 * TARIFA + (HORAS -35) * 1.5 * TARIFA;
        printf("\n\n\tTu salario bruto es %.2f",SBRUTO);

        if (SBRUTO<=2000){
            IMPUESTOS=0
            printf("\n\n\tTU salario bruto no tiene impuestos%.2f",SBRUTO);
        }
        else if
        (SBRUTO<=2220){
            IMPUESTOS=(SBRUTO-2000) * 0.20;
            printf("\n\n\tTu salario bruto con impuestos es %.2f"SBRUTO);
        }
        else if (SBRUTO>2220){
                IMPUESTOS =(SBRUTO -2220) * 0.30;
        printf("\n\n\tTu salario bruto con impuestos es %.2f",SBRUTO);
        }
        SNETO = SBRUTO - IMPUESTOS;
        printf("\n\n\tTu salario bruto es de: ");
        printf("\n\n\tTu descuento por impuestos es de: ")
        scanf("%f",&IMPUESTOS);
        printf("\n\n\tTu salario neto es de: ");
        scanf("%f",&SNETO):
        printf("Desea hacer otro calculo de algun sueldo")


 }
    }


    return 0;
}
