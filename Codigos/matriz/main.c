#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define i 2
#define j 2


int main()
{
    int  resistencia[i][j],n,m,RS=0;
    float RP=0.00;
    for(n=0; n<i; ++n){
            for(m=0; m<j; ++m)
            {
                printf("\n\n\t Dame la resistencia [%d][%d]",n,m);
                scanf("%d",&resistencia[n][m]);

            }

    }

    printf ("\n\n");
     for(n=0; n<i; ++n){
            for(m=0; m<j; ++m)
            {
                printf("\n\n\t tresistencias [%d][%d] = %d",n,m,resistencia[n][m]);
            }


    }



    for(n=0; n<i; ++n){
            for(m=0; m<j; ++m)
            {
              RS += resistencia[n][m];
            }


    }


     for(n=0; n<i; ++n)
        {
            for(m=0; m<j; ++m)
            {
              RP += (float)1/resistencia[n][m];
            }


    }
    printf("\n\n\t La resistencia total en serie vale ==> %d",RS);
    printf("\n\n\tLa resistencia total en paralelo vale ==> %.2f ",RP);
    getch();


return 0;

}
