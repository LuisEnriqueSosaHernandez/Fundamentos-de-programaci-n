#include <iostream>

using namespace std;

int main()
{
    int arreglo[5]={20,20,20,20,20};
    int vendidos[5]={0,0,0,0,0};
    int precio[5]={100,50,25,10,5};
    int precioacomulado[5]={0,0,0,0,0};
    int localidad;
    int cantidad;
    int respuesta;
    int i;
    do{
    cout<<"Boletos a vender **Inserte numeros, no validado***"<<endl;
    for(i=0;i<5;i++){
        cout<<"Localidad "<<i<<" Precio $"<<precio[i]<<endl;
    }
    cout<<"Cual quieres comprar... Ingresa el numero de localidad"<<endl;
    cin>>localidad;
    if(localidad<=4&&localidad>=0){
    cout<<"Cuantos quieres comprar(maximo 5)"<<endl;
    int cantidad;
    cin>>cantidad;
    if(cantidad<=5&&arreglo[localidad]>=cantidad&&cantidad>0){
        arreglo[localidad]-=cantidad;
        vendidos[localidad]+=cantidad;
        precioacomulado[localidad]+=(precio[localidad]*cantidad);
        cout<<"exito en la venta"<<endl;
    }else{
    cout<<"Cantidad incorrecta o ya no queda esa cantidad de boletos"<<endl;
    }
    }else{
        cout<<"Localidad incorrecta"<<endl;
    }
    cout<<"Seguir vendiendo? 1 si 2 no"<<endl;
    cin>>respuesta;
    }while(respuesta!=2);
     for(i=0;i<5;i++){
        cout<<"Cantidad de boletos vendidos "<<vendidos[i]<<" Localidad "<<i<<" Total $"<<precioacomulado[i]<<endl;
    }
    return 0;
}
