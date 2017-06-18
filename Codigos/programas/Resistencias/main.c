#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int resist, NR, n, RSerie ,acumRS;
    float Rparalelo,acumRP;
    char opcion;
    printf("\n\n\t M E N U ");
    printf("\n\n\tA) Resistencia en paralelo ");
    printf("\n\n\tB) Resistencia en serie ");
    printf("\n\n\t Que deseas calcular ? ");
    fflush(stdin);
    scanf("%c",&opcion);

    switch(opcion)
    {
    case 'A':
        case 'a':
        printf("n\n\t Cuantas resistencias vas a considerar en tu calculo ");
        scanf("%d",&NR);
        for(n=1; n<=NR; n=n+1)
        {
            printf("\n\n\t Dame la resistencia %d ",n);
            scanf("%f",&Rparalelo);
            acumRP=acumRP + 1.0/Rparalelo;

        }
        printf("\n\n\t La resisitencia en paralelo es %.2f ",1/acumRP);
        getch();
        break;

        case 'B':
        case 'b':
        printf("\n\n\t Esta opcion es de tarea ");
        break;

        default: printf("\n\n\t La eleccion es erronea , no existe laocion que has sellecionado nimodo ");
        }//fin del switch
        getch();
    }//fin del main
