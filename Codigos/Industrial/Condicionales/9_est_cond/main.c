#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day;
    printf("Ingresa el dia \n");
    scanf("%d",&day);
    if(day==1){
        printf("Lunes");
    }else if(day==2){
        printf("Martes");
    }else if(day==3){
        printf("Miercoles");
    }else if(day==4){
        printf("Jueves");
    }else if(day==5){
        printf("Viernes");
    }else if(day==6){
        printf("Sabado");
    }else if(day==7){
        printf("Domingo");
    }
    return 0;
}
