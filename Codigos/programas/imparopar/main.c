#include <stdio.h>

int main(){
    int x,y;
    printf("Ingresa un numero: ");
    scanf("%i",&x);
    y = x % 2;
    if(y==0)
    {
        printf("El numero %i es par\n",x);
    }
    else{
        printf("El numero %i es impar\n",x);
    }
    system("pause");
    return 0;
}
