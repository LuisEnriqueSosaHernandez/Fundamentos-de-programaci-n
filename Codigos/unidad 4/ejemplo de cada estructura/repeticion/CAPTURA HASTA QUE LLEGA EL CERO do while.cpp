#include <stdio.h>
# include <conio.h>


int main(){

    int x;
    do{
        printf("\n\n\tDame un numero (0 para terminar) ");
        scanf("%i",&x);

        printf("\n\n\tel numero que me diste es %d ",x);
        

    }while(x!=0);
getch();
}