#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int numero;
    printf("Dame cualquier numero ");
    scanf("%d",&numero);
    if(numero==0)
    {
     printf("el valor es nulo");
    }
    else if(pow(-1,numero)>0)

    printf("par");

    else if(pow(-1,numero)<0)
        printf("impar");

    getch();

return(0);


}

