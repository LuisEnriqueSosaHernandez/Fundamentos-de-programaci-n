/* programa que hace las 4 operaciones basicas
PROGRaMO: yo
*/

# include<stdio.h>
# include<conio.h>


main()
{
int _NUM, N2, SUMA, resta, mulT;
float DIV;

printf("\n\nDame el numero 1 y el numero 2 ");
scanf("%d%d",&_NUM,&N2);

SUMA = _NUM + N2;
resta =_NUM - N2;
mulT = _NUM * N2;
DIV = (float)_NUM/ N2;

printf("\n\nLa suma de %d mas %d vale %d ",_NUM,N2,SUMA);

printf("\n\nLa resta de %d menos %d vale %d ",_NUM,N2,resta);

printf("\n\nLa multiplicacion de %d por %d vale %d ",_NUM,N2,mulT);

printf("\n\nLa division de %d entre %d vale %f ",_NUM,N2,DIV);

getch();

}

