#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int cal, N=100,n,acum=0;
    char resp;

    for(n=1;n<N;++n)
    {
        printf("n\n\t Dame la calificacion: %d ",n);
        scanf("%d",&cal);
        acum=acum + cal;
        printf("\n\n\t Desea capturar otra calificacion ");
        fflush(stdin);
        scanf("%c",&resp);
        if (resp=='s') continue;
        else
            break;
    }
    printf("\n\n\t El promedio %.2f",(float ) acum/n);
    getch();
}

