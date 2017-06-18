//En el bucle do while el prohrama se ejecuta al menos una vez aunque la condicion no se cumpla
#include <stdio.h>


int main()
{
    int i;
    i=5;
    do{
    printf("Esto se ejecutara al menos una vez\n");
    i++;
    }while(i<10);
  system("pause");
    return 0;
}
