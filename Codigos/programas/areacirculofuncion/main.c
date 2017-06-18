#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define pi 3.1416

float sopa(float r);
 int main(){
      float r;
    printf("Dame el valor del radio: ");
    scanf("%f",&r);

printf("El valor del area es %f:\n",sopa(r));
system("pause");
}
float sopa(float e)
{
    float area;
    area =pi*(e*e);
    return area;
}

