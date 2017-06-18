/*    OPERADORES DE INCREMENTO Y DECREMENTO   */

# include<stdio.h>
# include<conio.h>


main()
{

int x=1;
float z=1.5;



printf("\t\n\nEl valor de x  con postincremento NO EJECUTADO = %d",x++);

printf("\t\n\nEl valor de x  con postincremento EJECUTADO = %d",x);

printf("\t\n\nEl valor de x  con PREINCREMENTO = %d",++x);

printf("\t\n\nEl valor de x  con PREDECREMENTO = %d",--x);

printf("\t\n\nEl valor de Z  con preincremento = %.2f",++z);

getch();
clrscr();


int m=45, n= 75;

printf("\n\n\tValor inicial de m = %d, y de 	n = %d\n\n",m,n);

++m;
--n;

printf("\n\n\tValor de m sin asignacion y con preincremento = %d"
 "\n\n\ty de n  sin asignacion y con predecremento = %d\n\n",m,n);

m++;
n--;

printf("\n\n\tValor de m sin asignacion y con posincremento = %d"
"\n\n\t y de n sin asignacion y con predecremento = %d\n\n",m,n);

getch();
clrscr();


int a=5, b= 7, p,q;

printf("\n\n\tValor inicial de a = %d, y de 	b = %d\n\n",a,b);

p=++a;
q=--b;

printf("\n\n\tValor de p con asignacion (p = ++a)  y con preincremento de a = %d"
 "\n\n\ty de q  con asignacion (q = --b) y con predecremento de b = %d\n\n",p,q);

p=a++;
q=b--;

printf("\n\n\tValor de p con asignacion (p = a++) y con posincremento de a = %d"
"\n\n\t y de q con asignacion (q = b--)y con posdecremento de b  = %d\n\n",p,q);

printf("\n\n\tValor final de a = %d"
"\n\n\t y valor final de b  = %d\n\n",a,b);


getch();
clrscr();

int c=99, d=0;

printf("\n\n\tValor inicial de c  = %d, valor inicial de d = %d \n\n",c,d);

d=++c;

printf("\n\n\tValor   de d (d = ++c) = %d, y de c %d\n\n",d,c);

d=c++;

printf("\n\n\tValor  de d (d = c++) = %d, y de c  = %d\n\n",d,c);

printf("\n\n\tValor  de c++ = %d\n\n",c++);

printf("\n\n\tValor  de ++c = %d\n\n",++c);



getch();
clrscr();


}
