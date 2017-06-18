#include <stdio.h>
#include <stdlib.h>

int main()
{
    char validatenomina;
    int numnomina=1;
    do{


    char validate;
    int horastrabajadas=0;
    float salariohora=0.0;
    int trabajador=1;
    int tipotrabajador=0;
    float totalnomina=0.0;
    float totalempleadostemporales=0.0;
    float totalempleadosbase=0.0;
    int totaltrabajadoresnoimpuestos=0;
    float totalimpuestos=0.0;
    float totalhrextras=0.0;
    float salariototal=0.0;
    float horasextras=0.0;
    float horasextras45=0.0;
    float impuestos=0.0;

    do{
          printf("\nIngrese las horas trabajadas del trabajador %d \n",trabajador);
          scanf("%d",&horastrabajadas);
          printf("\nIngrese el salario por hora\n");
          scanf("%f",&salariohora);
          do{
          printf("\nIngrese el tipo de trabajador 1:temporal 2:base\n");
          scanf("%d",&tipotrabajador);
          if(tipotrabajador!=1&&tipotrabajador!=2){
            printf("\nSolo se puede ingresar 1 o 2\n");
          }
          }while(tipotrabajador!=1&&tipotrabajador!=2);
          if(horastrabajadas<=32){
            salariototal=salariohora*horastrabajadas;

          }
          if(horastrabajadas>32&&horastrabajadas<=45){
            salariototal=salariohora*32;
            horasextras=(horastrabajadas-32)*(salariohora*1.5);
            salariototal+=horasextras;
          }
          if(horastrabajadas>45){
             salariototal=salariohora*32;
              horasextras=(45-32)*(salariohora*1.5);
              horasextras45=(horastrabajadas-45)*(salariohora*3);
              salariototal+=horasextras;
              salariototal+=horasextras45;
          }

          totalhrextras+=horasextras+horasextras45;

          if(tipotrabajador==1&&salariototal>=1000){
                totalempleadostemporales+=salariototal;
                impuestos=(salariototal*.08);
            salariototal-=impuestos;
          totalimpuestos+=impuestos;
          totalnomina+=salariototal;
          }
          if(tipotrabajador==2&&salariototal>=1000){
              totalempleadosbase+=salariototal;
              impuestos=(salariototal*.1);
            salariototal-=impuestos;
            totalimpuestos+=impuestos;
            totalnomina+=salariototal;
          }
          if(salariototal<1000){
                if(tipotrabajador==1){
                    totalempleadostemporales+=salariototal;
                }
                if(tipotrabajador==2){
                    totalempleadosbase+=salariototal;
                }
                totalnomina+=salariototal;
            totaltrabajadoresnoimpuestos+=1;
          }

        printf("\nDesea ingresar otro empleado s/n\n");
        scanf("%s",&validate);
        trabajador+=1;
    }while(validate!='n');
    printf("\nTotal a pagar en empleados temporales: $ %f",totalempleadostemporales);
    printf("\nTotal a pagar en empleados base $ %f",totalempleadosbase);
    printf("\nTotal pagado en impuestos $ %f",totalimpuestos);
    printf("\nTotal pagado en horas extras $ %f",totalhrextras);
    printf("\nTotal a pagar en nómina con descuentos $ %f",totalnomina);
    printf("\nTrabajadores que no pagan impuestos %d\n", totaltrabajadoresnoimpuestos);


    char raya[]={"-----------------------------------------------------------------------------\n"};
    char tet [100];
    char teb [100];
    char ti [100];
    char the [100];
    char tn [100];
    char ttni [100];
    char facnum[100];
    char archivo[100];
    sprintf(archivo,"Nomina%d.txt",numnomina);
    sprintf(facnum,"Número de factura: %d\n\n\n",numnomina);
    sprintf(tet,"Total a pagar en empleados temporales: $ %f\n",totalempleadostemporales);
    sprintf(teb, "Total a pagar en empleados base $ %f\n",totalempleadosbase);
    sprintf(ti, "Total pagado en impuestos $ %f\n",totalimpuestos);
    sprintf(the, "Total pagado en horas extras $ %f\n",totalhrextras);
    sprintf(tn, "Total a pagar en nómina con descuentos $ %f\n",totalnomina);
    sprintf(ttni,"Trabajadores que no pagan impuestos  %d\n",totaltrabajadoresnoimpuestos);
    FILE* fichero;
    fichero = fopen(archivo, "w");
    fputs(facnum, fichero);
    fputs(raya, fichero);
    fputs(tet, fichero);
    fputs(raya, fichero);
    fputs(teb, fichero);
    fputs(raya, fichero);
    fputs(ti, fichero);
    fputs(raya, fichero);
    fputs(the, fichero);
    fputs(raya, fichero);
    fputs(tn, fichero);
    fputs(raya, fichero);
    fputs(ttni, fichero);
    fputs(raya, fichero);
    fclose(fichero);
    printf("Proceso completado");

    numnomina+=1;
    printf("\nDesea realizar otra nomina\n");
     scanf("%s",&validatenomina);
    }while(validatenomina!='n');
    return 0;
}
