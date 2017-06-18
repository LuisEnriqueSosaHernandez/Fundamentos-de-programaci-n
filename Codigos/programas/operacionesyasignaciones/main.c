//Ampliacion de conocimientos
#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    x = 10;
    y = 2;
    //operaciones basicas que existen
    x = x + y;
    printf("El valor de x + y es igual a: %i\n",x);
    x=10;//le volvi a asignar el valor de la operacion
    x +=y; //Es equivalente a x = x + y; y es igual con todas las operaciones basicas "+,- ,*,/"
    printf("El valor de x + y es igual a: %i\n",x);
    x = x - y;
    printf("El valor de x - y es igual a: %i\n",x);
    x = x * y;
    printf("El valor de x * y es igual a: %i\n",x);
    x = x / y;
    printf("El valor de x / y es igual a: %i\n",x);
    x = x % y;
    printf("El valor del resto de la division de x / y es igual a: %i\n",x);
    /*Estoy haciendo un alto para volverle a asignar el valor que tiene x al principio y ahora empezar con las operaciones de
    la libreria math*/
    system("pause");
    x = 10;
    //Operaciones con la libreria math.h
    printf("A partir de aqui son las operaciones de la liberia math.h\n");
    x = pow(y,x);//y^x
    printf("El valor de y elevado a x es  igual a: %i\n",x);
    x = sqrt(x);
    printf("El valor de raiz cuadrada de x es igual a: %i\n",x);
    //operadores de incremento
    x++;
    printf("El valor de x++ es %i\n",x);
    x--;
    printf("El valor de x-- es %i\n",x);
    system("pause");
    return 0;
}
