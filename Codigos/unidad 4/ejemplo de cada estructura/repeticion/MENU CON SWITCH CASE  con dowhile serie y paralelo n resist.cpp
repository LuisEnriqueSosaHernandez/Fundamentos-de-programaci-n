# include <stdio.h>
# include <conio.h>


main()
{
int NR,n,no;

float rsistencia,rs=0,rp=0;

char eleccion;

do
{
clrscr();
printf("\n\n\t         M   E   N   U ");
printf("\n\n\n\tS)  Resistencia en Serie\n\n\tP)  Resistencia en Paralelo");
printf("\n\n\n\tCual es tu eleccion ");
scanf(" %c",&eleccion);

switch(eleccion){
case 's':
case 'S':
no=0;
break ;

case 'P':
case 'p':
no=0;
break;

default : {printf("\n\n\tTe equivocaste elije de nuevo, OPRIME RETURN PARA CONTINUAR ");
           getch();
			  no=1;
          }

}

}
while(no!=0);



switch(eleccion)
{
case 'S':
case 's':


printf("\n\n\tCuantas resistencias en serie vas a considerar? ");
scanf("%d",&NR);

for(n=1;n<=NR;++n)
{
printf("\n\n\tDame la resistencia %d ",n);
scanf("%f",&rsistencia);
rs = rs + rsistencia;
}
printf("\n\n\tLa resistencia total en Serie vale %.2f ",rs);

break;

case 'P':
case 'p':


printf("\n\n\tCuantas resistencias en Paralelo vas a considerar? ");
scanf("%d",&NR);

for(n=1;n<=NR;++n)
{
printf("\n\n\tDame la resistencia %d ",n);
scanf("%f",&rsistencia),
rp=rp+1/rsistencia;
}
printf("\n\n\tLa resistencia total en Paralelo vale %.2f ",rp=1/rp);
break;


//default: printf("\n\n\n\n\tEleccion erronea ");

}


getch();
}