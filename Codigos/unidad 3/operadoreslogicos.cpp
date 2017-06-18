#include <stdio.h>
#include <conio.h>

	void main()
		{

      int respuesta;
      
      respuesta = (  10==10 && 5>2 ),


		printf( "\n\n\n\t10==10 && 5>2 da como resultado:       %i\n\n", respuesta );
		printf( "\t10==10 && 5>12 da como resultado:      %i\n\n", 10==10 && 5>12 );
		printf( "\t10==1 && 15>12 da como resultado:      %i\n\n", 10==1 && 15>12 );
      printf( "\t10==15 && 5>12 da como resultado:      %i\n\n", 10==15 && 5>12 );


		printf( "\n\n\n\t10==10 || 5>2 da como resultado:       %i\n\n", 10==10 || 5>2 );
      printf( "\t10==10 || 5>12 da como resultado:      %i\n\n", 10==10 || 5>12 );
		printf( "\t10==1 || 15>12 da como resultado:      %i\n\n", 10==1 || 15>12 );
      printf( "\t10==1 || 5>12 da como resultado:       %i\n\n", 10==1 || 5>12 );
		getch();
		}
