//Por medio del teclado metemos un numero y vemos si acertamos las condiciones
#include<stdio.h>
int main()
{
    int x;
    printf("Asignale un valor a x: ");
    scanf("%i",&x);
    if(x>10)
    {
        printf("Lastima amigo no has ganado el super gran premio que teniamos para ti\n");
    }
    else{
        printf("O por dios !!!! Eres el ganador de fabuloso premio ...\n te has ganado un fabuloso \n'GRACIAS POR PARTICIPAR'\n");
    }
    system("pause");
    return 0;
}
