#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int arreglox[3][4];
    int x,y;
    for(x=0;x<3;++x){
            for(y=0;y<4;y++){
        printf("\nDame el valor del arreglo [%d] [%d]: ",x,y);
    scanf("%d",&arreglox[x][y]);
    }


    }
     printf("\nTus numeros son:");
    for(x=0;x<3;x++){
            printf("\n\n");
            for(y=0;y<4;y++){

        printf("\t%d",arreglox[x][y]);

    }
    }
    return 0;
}
