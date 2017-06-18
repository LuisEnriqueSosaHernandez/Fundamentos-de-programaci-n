//Este ejemplito solamente marca el orden en el que funcionan las funciones y el paso de parametros
#include <stdio.h>

int maximo();

int main()
{
    int x,y,max;
x=18;
y=74;
    max=maximo(x,y);//paso de parametros
    printf("El numero mayor es: %i\n\n",max);
    system("pause");
    return 0;
}

int maximo(int a, int b){//paso de parametros a=x y b=y
    int aux;
if(a<b){
        aux=b;

}
else{
    aux=a;
}
return aux;
}
