//Este ejemplito solamente marca el orden en el que funcionan las funciones
#include <stdio.h>
int maximo();

int main()
{
    maximo();
    printf("Estamos dentro de main\n\n");
    system("pause");
    return 0;
}

int maximo(){
printf("Estamos dentro de maximo\n\n");
return 0;
}
