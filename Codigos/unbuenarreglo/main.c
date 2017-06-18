#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main()
{
    printf("\t\t\Calcula es sueldo de tus trabajadores\n\n");
    float arreglo[3][3],salario;
    int x,y,z;
    int v=1;

    for(x=0;x<3;x++){
        for(y=0;y<3;y++){
         printf("\nDame la paga del dia %d [%d][%d]: ",v++,x,y);

         scanf("%f",&arreglo[x][y]);
         salario+=arreglo[x][y];


    }
    }
      printf("\nCalculando sueldos");
      for(z=0;z<3;z++)
   {
       printf(".");
       Sleep(500);

   }
     for(x=0;x<3;x++){
            printf("\n\n");
            for(y=0;y<3;y++){

                 printf("\t%.2f",arreglo[x][y]);

}
     }
      printf("\nEl salario total es %.2f: \n",salario);
       printf("\nEl salario total con 25 de descuento es %.2f: \n",salario*.75);
         printf("\nEl salario total con 50 de descuento es %.2f: \n",salario/2);
          printf("\nEl salario total con 75 de descuento es %.2f: \n\n",salario*.25);
         system("pause");





    return 0;
}
