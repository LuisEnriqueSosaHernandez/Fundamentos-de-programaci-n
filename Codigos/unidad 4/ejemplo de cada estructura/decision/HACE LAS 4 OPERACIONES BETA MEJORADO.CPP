/*Programa que realiza las cuatro operaciones aritméticas fundamentales (+,-,*,/).*/


#include <stdio.h>
#include <conio.h>

char Hola();
char nombre[40];


int main()
{
int prim,seg,resul;
float resul2;
char oper;

clrscr();
Hola();

 printf("\n\n%s, introduce el primer numero: ",nombre);
 scanf("%d",&prim);

 printf("\n\n%s dame el segundo numero: ", nombre);
 scanf("%d",&seg);

 printf("\n\n%s que operacion deseas realizar (+,-,*,/): ",nombre);
 //oper=getch();
scanf(" %c",&oper);

//  if(oper != '/')
//  {
  if(oper=='+')
               {
					resul=prim+seg;
               printf("\n%s el resultado de la operacion %d %c %d es %d",nombre,prim,oper,seg,resul);
               }
               else

  if(oper=='-')
  					{
					resul=prim-seg;
               printf("\n%s el resultado de la operacion %d %c %d es %d",nombre,prim,oper,seg,resul);
               }
               else
  if(oper=='*')
  					{
					resul=prim*seg;
               printf("\n%s el resultado de la operacion %d %c %d es %d",nombre,prim,oper,seg,resul);
               }
               else
  //getch();

  if(oper=='/' && seg > 0)
              {
					resul2= (float) prim/seg;

               printf("\n%s el resultado de la operacion %d %c %d es %.2f",nombre,prim,oper,seg,resul2);
               getch();
              }

          		else
           			{
                   printf("\n\nDivision por 0 ! el segundo numero"
                   " que introdujiste es 0, abusado WEY");
                   getch();
                  }

              if( oper != '+' && oper != '-' && oper != '*' && oper != '/')
               { 		printf("\n\n\nMAL ELECCION DEL OPERADOR");
                     getch();
               }
getch();
}// FIN DEL MAIN

char Hola()
{
printf("\n\nComo te llamas? ");
scanf("%s",&nombre);
printf("\n\n%s eres bien venido a este programa", nombre);
return 0;
}




