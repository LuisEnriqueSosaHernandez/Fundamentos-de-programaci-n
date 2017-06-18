//Muestra la hora agro un segundo
#include <stdio.h>


int main()
{
    int hora,min,seg;
    printf("ingresa la hora: ");
    scanf("%i",&hora);
    printf("ingresa los minutos: ");
    scanf("%i",&min);
    printf("ingresa los segundos: ");
    scanf("%i",&seg);
    if(hora <=23 && min <=59 && seg <=59){
            seg+=1;//es lo mismo que poner seg = seg+1
       if(seg==60){
        min+=1;
        seg=0;
    }
    if(min==60){
        hora+=1;
        min=0;
    }
    if(hora==24){
        hora=0;
    }
        printf("La hora es: %i:%i:%i\n",hora,min,seg);

    }
    else{
        printf("La hora es incorrecta");
    }
    system("pause");
    return 0;
}
