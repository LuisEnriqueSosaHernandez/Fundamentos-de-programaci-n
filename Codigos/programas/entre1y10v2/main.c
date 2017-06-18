//Averigua si el numero entre en una de las condiciones de o||
#include <stdio.h>
int main()
{
    int x;
    printf("Inserta un numero: ");
        scanf("%i",&x);

        if(x>=1 || x<=10){ //o ||significa que si se cumple una condicion entra
            printf("Tu numero%i cumple con una de las condiciones\n",x);
        }
else{
    printf("Tu numero %i no esta entre el 1 y 10\n",x);

}
    system("pause");
    return 0;
}
