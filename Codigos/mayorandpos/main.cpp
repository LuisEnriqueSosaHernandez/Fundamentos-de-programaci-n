#include <iostream>

using namespace std;

int main()
{
    int tam,tam2=0,mayor,pos;
    string resp="null";
    string resp2;
    do{
    cout<<"Ingresa el tama;o del arreglo"<<endl;
    cin>>tam;
    int a[tam];
    tam2=tam;
    for(int i=0;i<tam;i++){
             cout<<"Introduce un valor"<<endl;
        cin>>a[i];
        if(i<tam-1){
        cout<<"Te has arrepentido presiona s para dejar de introducir datos s/si - n/no"<<endl;
        cin>>resp;
        if(resp=="s"){
            tam2=i+1;
            break;
        }
        }

    }
    mayor=a[0];
    for(int i=0;i<tam2;i++){
        if(a[i]>=mayor){
            mayor=a[i];
            pos=i+1;
        }
    }
    cout<<"El numero mayor introducido , dependiendo que todos son diferentes es: "<<mayor<<"En la posicion: "<<pos<<endl;
        cout<<"Deseas repetir el proceso s/si - n/no"<<endl;
    cin>>resp2;
    resp="null";
    tam2=0;
    }while(resp2!="n");

    return 0;
}
