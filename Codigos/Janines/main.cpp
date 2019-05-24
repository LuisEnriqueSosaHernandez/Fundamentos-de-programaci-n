#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>
#include <cctype> // isdigit
#include <cstdlib> // atoi
using namespace std;
bool esNumerico(string);
int main()
{
    string comanda="",lista="";
    string producto[50]= {"Huevos a la mexicana","Tacos de pastor","Kilo de pastor","Agua de horchata"};
    char temporal[60];
    double precio[4]= {25.50,5.00,250.00,16.50};
    double total=0;
    int opcion,opcionP,i,cantidad;
    string linea;
    bool repite = true;
    time_t tiempo = time(NULL);
    struct tm *tlocal = localtime(&tiempo);
    char output[11];
    strftime(output,11,"%d/%m/%Y",tlocal);
    cout << "**********Restaurante Janines**********" << endl;
    cout<<"Registrar cuenta a nombre de : ";
    getline(cin, comanda);
    do
    {
        repite=true;
        cout << "\n**********Pedido a nombre de: "<<comanda <<"**********" << endl;
        cout<<"1.Anadir producto"<<endl;
        cout<<"2.Mostrar subtotal con IVA"<<endl;
        cout<<"3.Finalizar pedido "<<endl;
        cout<<"4.Cancelar pedido "<<endl;
        do
        {
            cout<<"Elige una opcion: ";
            getline(cin, linea);

            if (esNumerico(linea))
            {
                repite = false;
            }
            else
            {
                cout << "No ha ingresado un entero. Intente nuevamente" << endl;
            }
        }
        while (repite);
        opcion = atoi(linea.c_str());
        if(opcion<1||opcion>4)
        {
            cout<<"\n**********Opcion incorrecta**********" <<endl;
        }
        else
        {
            switch (opcion)
            {
            case 1:
                do
                {
                    cout << "\n**********Anadir producto: "<<comanda <<"**********" << endl;
                    cout<<"1.Regresar al menu anterior"<<endl;
                    for(i=0; i<sizeof(precio)/sizeof(double); i++)
                    {
                        cout<<(i+2)<<"."<<producto[i]<<" Precio: $"<<precio[i]<< endl;
                    }
                    repite=true;
                    do
                    {
                        cout<<"Elige una opcion: ";
                        getline(cin, linea);

                        if (esNumerico(linea))
                        {
                            repite = false;
                        }
                        else
                        {
                            cout << "No ha ingresado un entero. Intente nuevamente" << endl;
                        }
                    }
                    while (repite);
                    opcionP = atoi(linea.c_str());

                    if(opcionP<1||opcionP>sizeof(precio)/sizeof(double)+1)
                    {
                        cout<<"\n**********Opcion incorrecta**********" <<endl;
                    }
                    else
                    {
                        if(opcionP!=1)
                        {
                            do
                            {


                                repite=true;
                                do
                                {
                                    cout<<"Cantidad de productos: ";
                                    getline(cin, linea);

                                    if (esNumerico(linea))
                                    {
                                        repite = false;
                                    }
                                    else
                                    {
                                        cout << "No ha ingresado un entero. Intente nuevamente" << endl;
                                    }
                                }
                                while (repite);
                                cantidad = atoi(linea.c_str());

                                if(cantidad<0)
                                {
                                    cout<<"\n**********Opcion incorrecta**********" <<endl;
                                }
                                else if(cantidad==0)
                                {
                                    cout<<"\n**********Cancelado**********" <<endl;
                                }
                                else
                                {
                                    cout<<"\n**********Agregado**********" <<endl;
                                    lista+=producto[opcionP-2];
                                    sprintf(temporal, " x %d = $%.2lf\n",cantidad, precio[opcionP-2]*cantidad );
                                    lista+=temporal;
                                    total+= precio[opcionP-2]*cantidad;
                                    cout<<lista;
                                }
                            }
                            while(cantidad<0);
                        }
                    }
                }
                while(opcionP!=1);
                break;
            case 2:
                cout<<"\n**********Subtotal**********" <<endl;
                cout<<lista<<"\nSubtotal con IVA: $"<<total<<endl;
                break;
            case 3:
                cout << "\n**********Ticket Janines**********" << endl;
                cout << "\n**********Fecha: " <<output<<"**********"<< endl;
                cout<<"\n**********Productos**********" <<endl;
                cout<<lista<<"\nSubtotal: $"<<total-(total*.16)<<"\nIVA %16: $"<<total*.16<<"\nTotal: $"<<total<<endl;
                break;
            case 4:
                cout << "\n**********Pedido cancelado**********" << endl;
                opcion=4;
                break;
            }
        }
    }
    while(opcion!=3&&opcion!=4);
    return 0;
}

bool esNumerico(string linea)
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
        int i;
        if (linea[0] == '+' || linea[0] == '-')
            i = 1;
        else
            i = 0;

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
