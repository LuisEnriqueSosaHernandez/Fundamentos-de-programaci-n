#include <stdio.h>
#include <stdlib.h>

int main()
{
    char resp='s';
    int n,i;
    while(resp!='n'){
        printf("Inserta un numero:\n");
        scanf("%d",&n);
        printf("La tabla de multiplicar es:\n");
        for(i=1;i<11;i++){
            printf("%d * %d = %d\n",n,i,n*1);
        }
        printf("Ingresa s para si o n para no continuar:\n");
        scanf("%c",&resp);
    }
    return 0;
}
