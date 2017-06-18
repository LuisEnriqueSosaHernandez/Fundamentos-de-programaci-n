//Este ejemplito solamente marca el orden en el que funcionan las funciones y el paso de parametros
#include <stdio.h>


int maximo();

int main()
{
    int x,y;
x=3;
y=4;
    maximo(x,y);//paso de parametros
    system("pause");
    return 0;
}

int maximo(int a, int b){//paso de parametros a=x y b=y
printf("%i, %i\n\n",a,b);
return 0;
}

