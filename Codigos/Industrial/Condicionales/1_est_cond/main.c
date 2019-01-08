#include <stdio.h>
#include <stdlib.h>

int main()
{
    double calf;
    double media;
    int i;
    for(i=0;i<4;i++){
        printf("Inserte la calificacion %d\n",(i+1));
        scanf("%lf",&calf);
        media+=calf;
    }
    media/=4;
    if(media>=90){
        printf("La media es A");
    }
    if(media>=80&&media<90){
        printf("La media es B");
    }
     if(media>=70&&media<80){
        printf("La media es C");
    }
     if(media>=60&&media<70){
        printf("La media es D");
    }
     if(media<59){
        printf("La media es E");
    }
    return 0;
}
