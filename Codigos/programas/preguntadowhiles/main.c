//nos pregunta si queremos continuar y hasta que oprimamos n continuara
#include <stdio.h>
int main()
{
    char i;
    char r;
    printf("introduce una letra hasta encontrar la correcta\n");
    while(r!='n'&&r!='N')
        {
        do{
            printf("Adivina la letra: ");
        scanf("%c",&i);
    fflush(stdin);
}while(i!='a'&&i!='A');
    printf("Felicidades has encontrado la letra\n");

    printf("Desea continuar?: n=no cualquier otro=si: ");
    scanf("%c",&r);
    fflush(stdin);
        }
    system("pause");
    return 0;
}
