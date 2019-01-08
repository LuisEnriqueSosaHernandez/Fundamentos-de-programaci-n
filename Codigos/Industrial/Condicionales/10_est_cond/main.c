#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day;
    printf("Ingrese dia ordinal\n");
    scanf("%d",&day);

    if(day>0&&day<=31){
        printf("El dia pertenece a Enero");
    }else if(day>31&&day<=59){
     printf("El dia pertenece a Febrero");
    }
    else if(day>59&&day<=90){
     printf("El dia pertenece a Marzo");
    }else if(day>90&&day<=120){
     printf("El dia pertenece a Abril");
    }else if(day>120&&day<=151){
     printf("El dia pertenece a Mayo");
    }else if(day>151&&day<=181){
     printf("El dia pertenece a Junio");
    }else if(day>181&&day<=212){
     printf("El dia pertenece a Julio");
    }else if(day>212&&day<=243){
     printf("El dia pertenece a Agosto");
    }else if(day>243&&day<=273){
     printf("El dia pertenece a Septiembre");
    }else if(day>273&&day<=304){
     printf("El dia pertenece a Octubre");
    }else if(day>304&&day<=334){
     printf("El dia pertenece a Noviembre");
    }else if(day>334&&day<=365){
     printf("El dia pertenece a Diciembre");
    }
    return 0;
}
