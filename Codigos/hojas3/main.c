#include <stdio.h>
#include <stdlib.h>

int main()
{ int arreglo[5]={1,2,3,4,5,6};
int n;
printf("Dame un numero:" );
    scanf("%d",&n);
    if(n==arreglo[0]){
        printf("\nEl numero %d se encuentra en el arreglo\n En la posicion [%d]",n,arreglo[0]);
    }

    if(n==arreglo[1]){
        printf("\nEl numero %d se encuentra en el arreglo\n En la posicion [%d]",n,arreglo[1]);
    }

    if(n==arreglo[2]){
        printf("\nEl numero %d se encuentra en el arreglo\n En la posicion [%d]",n,arreglo[2]);
    }


    if(n==arreglo[3]){
        printf("\nEl numero %d se encuentra en el arreglo\n En la posicion [%d]",n,arreglo[3]);
    }

    if(n==arreglo[4]){
        printf("\nEl numero %d se encuentra en el arreglo\n En la posicion [%d]",n,arreglo[4]);
    }

    if(n==arreglo[5]){
        printf("\nEl numero %d se encuentra en el arreglo\n En la posicion [%d]",n,arreglo[5]);
    }
    else{
        printf("\nEl numero no se encuentra en el arreglo");
    }
    system("pause");
return 0;

}
