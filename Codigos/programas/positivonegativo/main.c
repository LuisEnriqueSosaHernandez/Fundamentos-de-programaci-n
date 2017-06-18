#include <stdio.h>
#include <stdlib.h>

int main()//calcula si es positivo o negativo
{
    float num;
    printf("Dame un numero:");
    scanf("%f",&num);
    if(num==0)
        {
            printf("el valor es nulo");
        }
    else if(num>0)
        printf("positivo");


        else if(num<0){
        printf("negativo");
        }


        getch();

    return 0;
}
