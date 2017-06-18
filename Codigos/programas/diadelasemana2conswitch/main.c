//Este programa es el mismo del dia de la semana solo que con la sentencia if con switch case
#include<stdio.h>
int main(){
int x;
printf("Introduce un numero entre 1 y 7 para decirte que dia de la semana es: ");
scanf("%i",&x);
switch(x){
case 1: printf("Lunes\n");break;
case 2: printf("Martes\n");break;
case 3: printf("Miercoles\n");break;
case 4: printf("Jueves\n");break;
case 5: printf("Viernes\n");break;
case 6: printf("Sabado\n");break;
case 7: printf("Domingo\n");break;
default : printf("El caso no es correcto\n");
}
system("pause");
return 0;

}
