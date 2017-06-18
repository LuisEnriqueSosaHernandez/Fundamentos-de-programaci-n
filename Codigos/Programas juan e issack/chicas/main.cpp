#include <iostream>
#include<time.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    string nombrechica[539];
    int edad[539];
    float medida[539];
    srand(time(NULL));
    string nombrechica2[]={"angeles","karina"};
    cout<<"\n\n\nDatos Iniciales"<<"\n\n\n";
    for(int i=0;i<539;i++){
            if(i%2==0){
                 nombrechica[i]=nombrechica2[0];
            }else{
                 nombrechica[i]=nombrechica2[1];
            }
            medida[i]=(float)(rand() % 201)/100;
            edad[i]=rand()%25;
    }
    for(int i=0;i<539;i++){
        cout<<"Nombre: "<<nombrechica[i]<<" "<<medida[i]<<" edad:"<<edad[i]<<"\n";
    }
    cout<<"\n\n\nMayores de edad"<<"\n\n\n";
    for(int i=0;i<539;i++){
            if(edad[i]>=18&&medida[i]>=1.63){
         cout<<"Nombre: "<<nombrechica[i]<<" "<<medida[i]<<" edad: "<<"edad: "<<edad[i]<<"\n";
            }
    }
    return 0;
}
