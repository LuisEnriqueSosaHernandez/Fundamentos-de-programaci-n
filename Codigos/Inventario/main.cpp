#include <iostream>
#include <string>
#include <stdio.h>
#include <cctype> // isdigit
#include <cstdlib> // atoi
using namespace std;
bool esNumero(string);
bool esNumeroFloat(string);
int main()
{
    int opcion;
    int tam;
    int i,j;
    bool encuentra=false;
    bool existe=false;
    string ingreso;
    string nombre;
    string precio;
   cout<<"----------------------------------------++++El bicolor++++----------------------------------------"<<endl;
    cout<<"----------------------------------++++Sistema de inventario++++-----------------------------------"<<endl;
   while(true){
            cout<<"Cuantos productos quieres ingresar: ";
        getline(cin, ingreso);
    if(esNumero(ingreso)){
        tam = atof(ingreso.c_str());
        break;
    }else{
        cout<<"No es un numero-Intenta de nuevo"<<endl;
    }
    }
    string productoName[tam];
    string categoria[tam];
    string descripcion[tam];
    double productoPrice[tam];
    for(i=0;i<tam;i++){
        while(true){
            existe=false;
             cout<<"Ingrese nombre del producto "<<(i+1)<<": ";
             getline(cin,nombre);

        for(j=0;j<tam;j++){
            if(nombre==productoName[j]){
                cout<<"Producto ingresado anteriormente"<<endl;
            existe=true;
                break;
            }
        }
if(!existe){
    productoName[i]=nombre;
    break;
}
        }
         cout<<"Ingrese categoria: ";
         getline(cin,categoria[i]);
        cout<<"Ingrese descripcion: ";
         getline(cin,descripcion[i]);
         while(true){
     cout<<"Ingrese precio: ";
        getline(cin,precio);
        if(esNumeroFloat(precio)){
//productoPrice[i] = atoi(precio.c_str());
//Conversion correcta de string a float
productoPrice[i]=strtof((precio).c_str(),0);
        break;
        }else{
            cout<<"No es un numero-Intenta de nuevo"<<endl;
        }
         }
        //cin.ignore();
    }
   do{
        cout<<endl;
        encuentra=false;
   cout<<"1.Mostrar todos los productos"<<endl;
   cout<<"2.Buscar producto"<<endl;
   cout<<"3.Buscar productos por categoria"<<endl;
   cout<<"4.Salir"<<endl;
   cout<<"Ingrese una opcion: ";
    getline(cin, ingreso);
    if(esNumero(ingreso)){
        opcion = atoi(ingreso.c_str());
        switch(opcion){
    case 1:
         cout<<endl;
            for(i=0;i<tam;i++){
                cout<<"Producto "<<(i+1)<<": "<<productoName[i]<<" Precio: $"<<productoPrice[i]<<" Categoria: "<<categoria[i]<<" Descripcion: "<<descripcion[i]<<endl;
            }
        break;
        case 2:
             cout<<endl;
            cout<<"Ingrese el nombre del producto: ";
               getline(cin, nombre);
               for(i=0;i<tam;i++){
                if(productoName[i]==nombre){
 cout<<"Producto "<<(i+1)<<": "<<productoName[i]<<" Precio: $"<<productoPrice[i]<<" Categoria: "<<categoria[i]<<" Descripcion: "<<descripcion[i]<<endl;
                encuentra=true;
                }
               }
               if(!encuentra){
                cout<<"El producto no se encontro , verifica"<<endl;
               }
        break;
        case 3:
             cout<<endl;
            cout<<"Ingrese categoria del producto: ";
               getline(cin, nombre);
               cout<<"Productos de la categoria: "<<nombre<<endl;
               for(i=0;i<tam;i++){
                if(categoria[i]==nombre){
 cout<<"Producto "<<(i+1)<<": "<<productoName[i]<<" Precio: $"<<productoPrice[i]<<" Categoria: "<<categoria[i]<<" Descripcion: "<<descripcion[i]<<endl;
                 encuentra=true;
                }
               }
               if(!encuentra){
                cout<<"No se encontraron productos , verifica"<<endl;
               }
            break;
    default:
         cout<<endl;
        cout<<"Opcion incorrecta"<<endl;
        break;
        }
    }else{
            cout<<"No es un numero-Intenta de nuevo"<<endl;
    }
   }while(opcion!=4);
    return 0;
}

bool esNumero(string linea)
{
    bool b = true;
    int longitud = linea.size();

    if (longitud == 0)   // Cuando el usuario pulsa ENTER
    {
        b = false;
    }
    else if (longitud == 1 && !isdigit(linea[0]))
    {
        b = false;
    }
    else
    {
        int i=0;
        while (i < longitud)
        {
            if (!isdigit(linea[i]))
            {
                b = false;
                break;
            }
            i++;
        }
    }

    return b;
}

bool esNumeroFloat(string linea)
{
    bool b = true;
    int point=0;
    int longitud = linea.size();

    if (longitud == 0)   // Cuando el usuario pulsa ENTER
    {
        b = false;
    }
    else if (longitud == 1 && !isdigit(linea[0]))
    {
        b = false;
    }
    else
    {
        int i=0;
        while (i < longitud)
        {
             if(linea[i]=='.'){
                    point++;
                }
                if(point>1){
                        b=false;
                    break;
                }
            if (!isdigit(linea[i])&&linea[i]!='.')
            {
                b = false;
                cout<<"que pedo"<<endl;
                break;
            }
            i++;
        }
    }

    return b;
}

