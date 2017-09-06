#include <iostream>


using namespace std;

int main()
{
    int a[10];//arreglo
    int puntero1,puntero2,aux;//variables de punteros y aux para el metodo burbuja
    char resp;//variable para la respuesta del usuario si quiere repetir o no
    do{//ciclo do while para repetir el proceso completo
        puntero1=0;//puntero que reccorre la primera mitad del arreglo
    puntero2=5;//puntero que recorre la segunda mitad del arreglo
             for(int i=0;i<10;i++){//ciclo para ingresar datos en el arreglo
                    cout<<"Ingrese el valor: "<<i<<endl;
                    cin>>a[i];
        }
       while(puntero1<5&&puntero2<10){//ciclo que permite ordenar de la forma deseada los datos auspiciado por el metodo burbuja
         aux=a[puntero2];
        a[puntero2]=a[puntero1];
        a[puntero1]=aux;
        puntero1++;
        puntero2++;
       }
       cout<<"Ordenados"<<endl;
        for(int i=0;i<10;i++){//Impresion de los datos ordenados o mas bien desordenados xD
cout<<a[i]<<endl;
        }
        cout<<"Repetir s=si n=no"<<endl;
        cin>>resp;//entrada de respuesta del usuario a peticion de repeticion
    }while(resp!='n');//fin del ciclo do while cuando el usuario ingrese n

    return 0;
}
