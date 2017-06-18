#include <iostream>

using namespace std;

int main()
{
    int tamano;
    float promedio=0.0;
    int contador=0;
    do{
        cout<<"Determine la cantidad de chicas del tec: "<<endl;
    cin>>tamano;
    if(tamano<1){
        cout<<"Ingrese un tamano valido: "<<endl;
    }
    }while(tamano<1);

    int edades[tamano];
    float cintura[tamano];
    float cadera[tamano];
    for(int i=0;i<tamano;i++){
             cout<<"Ingrese la edad: "<<i+1<<endl;
        cin>>edades[i];
     cout<<"ingrese la medida de cintura: "<<i+1<<endl;
        cin>>cintura[i];
         cout<<"Ingrese la medida de cadera: "<<i+1<<endl;
        cin>>cadera[i];
    }
    for(int i=0;i<tamano;i++){
        promedio+=edades[i];
    }
    promedio/=tamano;
    cout<<"el promedio de edad de las chicas del tec es: "<<promedio<<endl;
    promedio=0;
    for(int i=0;i<tamano;i++){
            if((cintura[i]>59&&cintura[i]<66)&&(cadera[i]>83&&cadera[i]<95)){
                promedio+=edades[i];
                contador++;
            }
    }
     promedio/=contador;
      cout<<"el promedio de edad de las chicas con buen cuerpo del tec es: "<<promedio<<endl;

    return 0;
}
