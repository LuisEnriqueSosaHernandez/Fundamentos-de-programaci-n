#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    float compra,paga;
    char resp='s';
while (resp=='s'){
    printf("Dame el total de tu compra: ");
    scanf("%f",&compra);

    if(compra<500){
    printf("el total de tu compra es %.2f",compra);
    }
else if(compra<=1000){
    paga=compra-(compra*0.05);
    printf("El total de tu compra es %.2f ",paga);
}
    else if(compra<=7000){
      paga=compra-(compra*0.11);
      printf("El total de tu compra es %.2f",paga);
    }
      else if(compra<=15000){
         paga=compra-(compra*0.18);
      printf("El total de tu compra es %.2f ",paga);

      }
      else{
      paga=compra-(compra*0.25);
      printf("El total de tu compra es %.2f",paga);
      }
      printf("\n\n Desea hacer otro calculo si=s/no=cualquier tecla: ");
fflush(stdin);
scanf("%c",&resp);
system("cls");

    }

getch();



    return 0;
}
