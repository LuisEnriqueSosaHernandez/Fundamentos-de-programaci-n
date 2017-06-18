//Este programa calcula los numeros primos entre 2 y 2000
#include <stdio.h>
int main()
{
   int x,i,j,resi,k;
   for(i=2;i<2000;i++){
        k=0;
    for(j=2;j<i&&k!=1;j++){
    resi=i%j;
    if(resi==0){
    k=1;
    }
    }
    if(k!=1){

        printf("%i, \n",i);

    }
       }


    system("pause");
    return 0;
}
