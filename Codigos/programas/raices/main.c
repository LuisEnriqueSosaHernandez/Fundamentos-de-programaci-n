/*construya un algoritmo tal que dado la expresion a x^2 mas bx+c=0, obtenga las raices reales de ser posible.*/
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<conio.h>
int main()
{
    float x1,x2,a,b,c,r;

     printf("\n\n\t Dame el valor de a ");
     scanf("%f",&a);

     printf("\n\n\t Dame el valor de b ");
     scanf("%f",&b);

     printf("\n\n\t Dame el valor de c ");
     scanf("%f",&c);


     r=b*b-4*(a*c);
     if(r>0)
     {
    x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
   x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);

         printf("n\n\t el resultado de x1 es %.2f ",x1);
         printf("n\n\t el resultado de x2 es %.2f ",x2);

    }
     else
     printf("error");
     getch();
    return 0;
}

