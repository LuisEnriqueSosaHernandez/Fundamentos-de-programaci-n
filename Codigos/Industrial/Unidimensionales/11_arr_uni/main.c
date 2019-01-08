#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100];
    int b[100];
    int i,j,cont=0;
    int max=0;
int bol=0;
    for(i=0;i<100;i++)
    {
     a[i]=rand() % 100;
    }

    for(i=0;i<100;i++)
    {
     for(j=0;j<100;j++)
    {
        if(a[i]==b[j])
            {
                bol=1;
        break;
        }
     }
     if(bol==0){
        b[cont]=a[i];
        bol=0;
        cont++;
     }
    }

    for(i=0;i<100;i++)
    {
    printf("%d\n",b[i]);
    }
    return 0;
}
