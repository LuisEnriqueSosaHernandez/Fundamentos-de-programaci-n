//este programa hara la serie de fibonnaci hasta que introduzcan n
#include <stdio.h>
int main()
{
  int x,y,res,n,i;
  printf("Cuantos numeros quieres tener en la sucesion de fibonacci: ");
  scanf("%i",&n);
  i=3;
  x=0;
  y=1;
  if(n==1){
  printf("0");
  }
  else{
    printf("0, 1,");
  }
   while(i<=n){ // 0 1 1 2
        res=x+y;
  printf("%i,",res);
  x=y;
  y=res;
  i++;

}
printf("\n");
  system("pause");
    return 0;
}

