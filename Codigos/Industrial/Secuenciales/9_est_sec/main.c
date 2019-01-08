#include <stdio.h>
#include <stdlib.h>

int main()
{
   double a,b,c,d,e,f;
   printf("Ingresa a\n",&a);
   scanf("%lf",&a);
   printf("Ingresa b\n",&b);
   scanf("%lf",&b);
   printf("Ingresa c\n",&c);
   scanf("%lf",&c);
   printf("Ingresa d\n",&d);
   scanf("%lf",&d);
   printf("Ingresa e\n",&e);
   scanf("%lf",&e);
   printf("Ingresa f\n",&f);
   scanf("%lf",&f);

   printf("x = %lf\n",(c*e-b*f)/(a*e-b*d));
   printf("y = %lf\n",(a*f-c*d)/(a*e-b*d));
    return 0;
}
