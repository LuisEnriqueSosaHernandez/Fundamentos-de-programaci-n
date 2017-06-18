/*Este programa se hara para calcular el descuento a un cliente*/

#include <stdio.h>
#include <conio.h>

int main()
{
float COMP,PAY;
printf("\n\n\tDame el total de tu compra: ");
scanf("%f",&COMP);
if (COMP < 500){
        PAY = COMP;
        printf("\n\n\tEl precio final es %.2f",PAY);
        printf("\n\n\tGRACIAS POR TU COMPRA! VUELVE PRONTO");
}
else if (COMP <= 1000){
        PAY = COMP - (COMP * 0.05);
        printf("\n\n\tEl precio final es %.2f",PAY);
        printf("\n\n\tGRACIAS POR TU COMPRA! VUELVE PRONTO");

}
else if (COMP <= 7000){
        PAY = COMP - (COMP * 0.11);
        printf("\n\n\tEl precio final es %.2f",PAY);
        printf("\n\n\tGRACIAS POR TU COMPRA! VUELVE PRONTO");
}
else if (COMP <= 15000){
        PAY = COMP - (COMP * 0.18);
        printf("\n\n\tEl precio final es %.2f",PAY);
        printf("\n\n\tGRACIAS POR TU COMPRA! VUELVE PRONTO");
}
else if (COMP > 15000){
        PAY = COMP - (COMP * 0.25);
        printf("\n\n\tEl precio final es %.2f",PAY);
        printf("\n\n\tGRACIAS POR TU COMPRA! VUELVE PRONTO");
}

getch();
return 0;
}

