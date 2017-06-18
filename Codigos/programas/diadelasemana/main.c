//Este es un programa que lee un numero y de acuerdo alnumero te dice eld ia de la semana que es con while e if anidadas
#include <stdio.h>
int main()
{
    int x;
    printf("Introduce un numero del 1 al 7 para que te diga que dia de la semana es: ");
    scanf("%i",&x);
    while(x>0&&x<7){
    if(x==1){
        printf("Lunes\n");
    }
    if(x==2){
        printf("Martes\n");
    }
    if(x==3){
        printf("Miercoles\n");
    }
    if(x==4){
        printf("Jueves\n");
    }
    if(x==5){
        printf("Viernes\n");
    }
    if(x==6){
        printf("Sabado\n");
    }
    if(x==7){
        printf("Domingo");
    }
system("pause");
return 0;
}

printf("El numero introducido es incorrecto\n");
    system("pause");
    return 0;
}
