/* Programa para usar los operadores de igualdad y de relacion usando
el la instruccion if */

	#include <stdio.h>  /* directiva para usar el print y el scan */
   #include <conio.h>  /* directiva para el uso del teclado y monitor */

   /* funcion principal, donde inicia el programa */

   	main()
      {
      		int numero1, numero2;        /* variables locales */

            printf("Introdusca los numeros a comparar\n"
            " y le dire las relaciones que satisfacen\n\n");;

            	scanf("%d%d",&numero1,&numero2);

             /* operador de igualdad */

            if (numero1==numero2){
            			printf("\n\n %d es igual a %d",numero1,numero2);
            	}							/* fin del if  */

            /* operador diferente de */

            if (numero1!= numero2){         /* operador diferente de */
            			printf("\n\n %d es diferente a %d ",numero1,numero2);
            	}
                                    /* fin del if  */
           /* operador menor que */

            if (numero1<numero2){
            			printf("\n\n %d es menor que %d ", numero1,numero2);
            	}
                                    /* fin del if  */
            /* operador mayor que */

            if (numero1>numero2){
            			printf("\n\n %d es mayor que %d ",numero1,numero2);
            	}                    /* fin del if  */

            /* operador menor o igual que */

            if (numero1<=numero2){
            			printf("\n\n %d es menor o igual que %d ",numero1,numero2);
            	}                    /* fin del if  */

            /* operador mayor o igual que */

            if (numero1>=numero2){
            			printf("\n\n %d es mayor o igual que %d ",numero1, numero2);
            	}                    /* fin del if  */


      getch();
      }








