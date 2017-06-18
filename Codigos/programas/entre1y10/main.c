//Averigua si el numero insertado mediante el teclado se encuentra entre 1 y 10 o si no lo esta
#include <stdio.h>
int main()
{
    int x;
    printf("Inserta un numero: ");
        scanf("%i",&x);

        if(x>=1 && x<=10){ //y && significa que las 2 condiciones se tienen que cumplir
            printf("Tu numero%i se encuentra entre 1 y 10\n",x);
        }
else{
    printf("Tu numero %i no esta entre el 1 y 10\n",x);

}
    system("pause");
    return 0;
}
