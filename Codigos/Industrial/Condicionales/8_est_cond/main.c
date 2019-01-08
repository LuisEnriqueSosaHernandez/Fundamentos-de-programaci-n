#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3];
    int i,j;
    int temp;
    for(i=0;i<3;i++){
        printf("Inserte numero %d\n",(i+1));
        scanf("%d",&arr[i]);
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(arr[j]>arr[j+1])
            {
             temp=arr[j+1];
             arr[j+1]=arr[j];
             arr[j]=temp;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
