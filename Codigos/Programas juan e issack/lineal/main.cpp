#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
   int arreglo[1531];
   int positivos[1531];
   int negativos[1531];
   for(int i=0;i<1531;i++){
    arreglo[i]=rand()%500 -250;
   }
   for(int i=0;i<1531;i++){
    cout<<"Numeros: "<<arreglo[i]<<"\n";
   }
   for(int i=0;i<1531;i++){
    if(arreglo[i]>=0){
        positivos[i]=arreglo[i];
    }else{
    positivos[i]==-1;
    }
   }
    cout<<"\n\n\n-----------------------------Numeros Positivos------------------------------------------\n\n\n";
   for(int i=0;i<1531;i++){
        if(positivos[i]!=-1){
    cout<<"Numeros: "<<positivos[i]<<"\n";
        }
   }


   for(int i=0;i<1531;i++){
    if(arreglo[i]<0){
        negativos[i]=arreglo[i];
    }else{
    negativos[i]==1;
    }
   }
    cout<<"\n\n\n-----------------------------Numeros Negativos------------------------------------------\n\n\n";
   for(int i=0;i<1531;i++){
        if(negativos[i]!=1){
    cout<<"Numeros: "<<negativos[i]<<"\n";
        }
   }



    return 0;
}
