//Este rpograma calcula el numero primo con funciones
#include <stdio.h>

int primo(int a);
int main()
{
    int x,y,prim1,prim2;
    printf("Dame el numero 1: ");
    scanf("%i",&x);
    printf("Dame el numero 2: ");
    scanf("%i",&y);
    prim1=primo(x);
    prim2=primo(y);
    if(prim1==0){
        printf("El numero %i es primo\n",x);

    }
    else{
        printf("El numero %i no es primo\n",x);
    }
    if(prim2==0){
        printf("El numero %i es primo\n",y);
    }
    else{
        printf("El numero %i no es primo\n",y);
    }
    }

    int primo(int a){
        int i,j,aux;
            for(i=2;i<a;i++){
                aux=a%i;
                if(aux==0)
                    {
                    j=1;
                }
            }


    return j;
     }

