#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main()
{
    int veces_letra[5], k=0;
    veces_letra[0]=0;
    veces_letra[1]=0;
    veces_letra[2]=0;
    veces_letra[3]=0;
    veces_letra[4]=0;
    char s_entrada[60],letra='\0';
    char s_entrada2[60];
     system("cls");
    printf("Este programa lee palabras desde un archivo,\n");
    printf("indicando cuantas veces aparece una letra,\n");
    printf("Archivo de entrada: ");
    while((s_entrada[k]=getchar())!='\n') k++;
    s_entrada[k]='\0';
    k=0;
    FILE *entrada;
    strcat(s_entrada, ".txt");
    entrada=fopen(s_entrada,"r");
    if(entrada==NULL) printf("Error al abrir archivo de entrada. \n");
    else{
        printf("Exito al abrir :%s \n",s_entrada);
        while((fscanf(entrada,"%c",&letra))==1){
            if((letra=='a')||(letra=='A')) veces_letra[0]++;
            if((letra=='e')||(letra=='E')) veces_letra[1]++;
            if((letra=='i')||(letra=='I')) veces_letra[2]++;
            if((letra=='o')||(letra=='O')) veces_letra[3]++;
            if((letra=='u')||(letra=='U')) veces_letra[4]++;
        }

    }
    fclose(entrada);
    int mayor=0;
    int puntero=0;
    int i;
     for(i=0;i<5;i++){
       if(mayor<veces_letra[i]){
        mayor=veces_letra[i];
        puntero=i;
       }
    }
    printf("Las veces que aparece a: %d\n",veces_letra[0]);
    printf("Las veces que aparece e: %d\n",veces_letra[1]);
    printf("Las veces que aparece i: %d\n",veces_letra[2]);
    printf("Las veces que aparece o: %d\n",veces_letra[3]);
    printf("Las veces que aparece u: %d\n",veces_letra[4]);
     char more [100];
    if(puntero==0){
        printf("Las vocal que mas aparece es a\n");
        sprintf(more,"Las vocal que mas aparece es a\n",veces_letra[4]);
    }
    if(puntero==1){
        printf("Las vocal que mas aparece es e\n");
        sprintf(more,"Las vocal que mas aparece es e\n",veces_letra[4]);
    }
    if(puntero==2){
        printf("Las vocal que mas aparece es i\n");
        sprintf(more,"Las vocal que mas aparece es i\n",veces_letra[4]);
    }
    if(puntero==3){
        printf("Las vocal que mas aparece es o\n");
        sprintf(more,"Las vocal que mas aparece es o\n",veces_letra[4]);
    }
    if(puntero==4){
        printf("Las vocal que mas aparece es u\n");
        sprintf(more,"Las vocal que mas aparece es u\n",veces_letra[4]);
    }

     char raya[]={"-----------------------------------------------------------------------------\n"};
    char la [100];
    char le [100];
    char li [100];
    char lo [100];
    char lu [100];


    sprintf(la,"Las veces que aparece a: %d\n",veces_letra[0]);
    sprintf(le,"Las veces que aparece e: %d\n",veces_letra[1]);
    sprintf(li,"Las veces que aparece i: %d\n",veces_letra[2]);
    sprintf(lo,"Las veces que aparece o: %d\n",veces_letra[3]);
    sprintf(lu,"Las veces que aparece u: %d\n",veces_letra[4]);
    sprintf(lu,"Las que mas aparece u: %d\n",veces_letra[4]);
    printf("Archivo de salida: ");
    k=0;
    while((s_entrada2[k]=getchar())!='\n') k++;
    s_entrada2[k]='\0';
    strcat(s_entrada2, ".txt");
    entrada = fopen(s_entrada2, "w");
    fputs(raya, entrada);
    fputs(la, entrada);
    fputs(raya, entrada);
    fputs(le, entrada);
    fputs(raya, entrada);
    fputs(li, entrada);
    fputs(raya, entrada);
    fputs(lo, entrada);
    fputs(raya, entrada);
    fputs(lu, entrada);
    fputs(raya, entrada);
    fputs(more, entrada);
    fputs(raya, entrada);
    fclose(entrada);
    printf("Proceso completado");

    return 0;
}
