#include <iostream>


using namespace std;

int main()
{
    int a[]={0,1,2,3,4,5,6,7,8,9};
    int puntero1=0,puntero2=5,aux;
    do{
        aux=a[puntero2];
        a[puntero2]=a[puntero1];
        a[puntero1]=aux;
        puntero1++;
        puntero2++;
    }while(puntero1<5&&puntero2<10);
    for(int i=0;i<10;i++){
cout<<a[i]<<endl;
        }
    return 0;
}
