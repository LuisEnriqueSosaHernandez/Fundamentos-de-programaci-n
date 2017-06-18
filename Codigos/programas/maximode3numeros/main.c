//hallar el numero maximo de 3 numeros ingresados por el teclado
#include<stdio.h>
int main(){
int x,y,z,numeromayor,max,min;
printf("Inserta el primer numero: ");
scanf("%i",&x);
printf("Inserta el segundo numero: ");
scanf("%i",&y);
printf("Inserta el tercer numero: ");
scanf("%i",&z);
if(x>y)
{
    if(x>z){
        max = x ;
    }
        else{
            max = z;
        }



}
else{
        if(y>z){
        max = y ;
    }
        else{
            max = z;
        }

}


printf("El numero mayor es: %i \n",max);
if(x<y)
{
    if(x<z){
        min = x ;
    }
        else{
            min = z;
        }



}
else{
        if(y<z){
        max = y ;
    }
        else{
            min = z;
        }

}
printf("El numero minimo es %i\n",min);

system("pause");
    return 0;
}
