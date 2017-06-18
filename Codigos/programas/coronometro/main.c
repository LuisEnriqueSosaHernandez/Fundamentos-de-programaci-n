//Este programa es acerca de un cronometro que comienza cuando se aprieta espacio usando la funcion sleep
//usando la libreria windows donde se encuentra
#include <stdio.h>
#include<windows.h>
#include<stdlib.h>


int main()
{
    int h,min,seg,x,ms;

    x=1;
    for(h=0;h<24;h++){
        for(min=0;min<60;min++){
            for(seg=0;seg<60;seg++){
                    for(ms=0;ms<60;ms++){
                    system("color 0B"); // fondo Rojo, letra blanco brillante (F)

                printf("Cronometro %02i:%02i:%02i:%02i\r",h,min,seg,ms);

                Sleep(x);
            }
        }
    }
    }


    system("pause");
    return 0;
}
