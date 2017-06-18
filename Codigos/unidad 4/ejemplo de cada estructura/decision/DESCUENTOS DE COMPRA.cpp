/* PROGRAMA QUE CALCULA DESCUENTOS EN FUNCION DE LA COMPRA */

#include <stdio.h>
#include <conio.h>

main()
{

float compra;

printf("\n\n\tDame el momto de la compra ");
scanf("%f",&compra);

if(compra <= 500)

	printf("\n\n\tNo hay descuento, Pago = %.2f",compra);

   else     // ELSE 1
   {

   	if(compra <= 1000)
         {
         printf("\n\n\tSi hay descuento del 5%");
         printf("\n\n\tPago = %.2f",compra*0.95);
         }

         else   // ELSE 2
         {
         	if(compra <= 7000)
            {
            printf("\n\n\tSi hay descuento del 11%");
            printf("\n\n\tPago = %.2f",compra*0.89);
            }
            else  // ELSE 3
            {
            	if(compra <= 15000)
               {
               printf("\n\n\tSi hay descuento del 18%");
               printf("\n\n\tPago = %.2f",compra*0.82);
               }
               else  // ELSE 4
               {
               printf("\n\n\tSi hay descuento del 25%");
               printf("\n\n\tPago = %.2f",compra*0.75);
               }     // ELSE 4

            } // ELSE 3
         } // ELSE 2
   } // ELSE 1
   getch();

   }
