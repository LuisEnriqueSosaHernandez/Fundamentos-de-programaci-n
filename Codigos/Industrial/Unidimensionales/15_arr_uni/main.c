#include <stdio.h>
#include <stdlib.h>

int main()
{
     char* (a[50])[25];
     double est[25];
     int i;
     for(i=0;i<25;i++){
        printf("Nombre \n");
        scanf("%s",&a[i]);
        printf("Estatura \n");
        scanf("%lf",&est[i]);
     }
       printf("A\n");
     for(i=0;i<25;i++){
        if(est[i]>=1.60&&est[i]<=1.65){
            printf("%s",a[i]);
        }
     }
      printf("B\n");
     for(i=0;i<25;i++){
        if(est[i]>=1.65&&est[i]<=1.72){
            printf("%s",a[i]);
        }
     }
      printf("C\n");
     for(i=0;i<25;i++){
        if(est[i]>=1.73&&est[i]<=1.80){
            printf("%s",a[i]);
        }
     }
      printf("D\n");
     for(i=0;i<25;i++){
        if(est[i]>=1.81&&est[i]<=1.85){
            printf("%s",a[i]);
        }
     }
      printf("E\n");
     for(i=0;i<25;i++){
        if(est[i]>=1.86){
            printf("%s",a[i]);
        }
     }
    return 0;
}
