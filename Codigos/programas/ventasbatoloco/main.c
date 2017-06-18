#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
  int N=0, V=0, i=0,chico=0,mediano=0,grande=0;
  char resp='s';
while (resp=='s'){
  printf("\n\n\tIngresar el numero de ventas: ");
  scanf("%d",&N);
   fflush(stdin);
  for (i=1; i<=N; i++){


  printf("\n\n\tIngresar la cantidad de ventas: ",i);
   scanf("%d",&V);
   fflush(stdin);

    if(V<=200){

    chico=chico+1;
    }
else if (V>200 && V<400){


    mediano=mediano+1;
}

else if(V>400){


    grande=grande+1;
}
  }
  printf("\n\n\tEl numero de ventas chico es: %d ",chico);
  printf("\n\n\tEl numero de ventas mediano es: %d ",mediano);
  printf("\n\n\tEl numero de ventas grande es: %d ",grande);
  printf("\n\n Desea hacer otro calculo si=s/no=cualquier tecla: ");
scanf(" %c",&resp);
if(resp=='s')
{
    mediano=0;
    chico=0;
    grande=0;
}
system("cls");

}
getch();
}
