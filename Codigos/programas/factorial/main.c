//programa que calcula el factorial
#include<stdio.h>
#include<windows.h>
int main()
{
    int x,i,fact,z;
    z=1000;
    fact=1;
    printf("De que numero quieres el factorial: ");
    scanf("%i",&x);
    for(i=1;i<=x;i++){
            fact= fact*i;
        printf("el factorial de %i es: %i\r",x,fact);
        Sleep(z);

    }
     printf("el factorial de %i es: %i\n",x,fact);
    system("pause");
    return 0;
}
