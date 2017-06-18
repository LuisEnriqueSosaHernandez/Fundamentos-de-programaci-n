#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()

{
    int a,b,c;
    char resp='s';
while (resp=='s'){
   printf("Dame el numero a : " );
   scanf("%d",&a);
printf("Dame el numero b : " );
   scanf("%d",&b);
 printf("Dame el numero c :" );
   scanf("%d",&c);
  if(a>b && b>c)
   {

       printf("a,b,c");

   }
   else if(c>a && b<a){
   printf("El orden de los numeros es de mayor a menor es : c,a,b");
   }
   else if(a>c && c>b){
    printf("El orden de los numeros es de mayor a menor es : a,c,b");
   }
   else if(b>a && a>c){
    printf("El orden de los numeros es de mayor a menor es : b,a,c");
   }
   else if(b>c && c>a){
   printf("El orden de los numeros es de mayor a menor es : b,c,a");
   }
   else if(c>a && a>b){
   printf("El orden de los numeros es de mayor a menor es : c,a,b");
   }
   else if(c>b && b>a){
   printf("El orden de los numeros es de mayor a menor es : c,b,a");
   }
   printf("\n\n Desea hacer otro calculo si=s/no=cualquier tecla: ");
scanf(" %c",&resp);
system("cls");
}
getch();


}





