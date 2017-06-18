#include<stdio.h>
#include<conio.h>

char Hola();
char nombre[40];


main(){

char eleccion;

float Voltaje,Resistencia,Intencidad,R1,R2,R3,R4,R5;

Hola();

printf ("\n\n\t Dime que deseas calcular %s\n\n",nombre);
printf ("\tA Calcular Voltaje\n\n");
printf ("\tB Calcular Resistencia\n\n");
printf ("\tC Calcular Intencidad\n\n");
printf ("\tD Calcular Resistencia en serie\n\n");
printf ("\tE Calcular Resistencia en paralelo\n\n");
scanf (" %c",&eleccion);


if( eleccion == 'A' || eleccion == 'a' )
{                                           // INICIO 1er IF
printf ("Dame la Resistencia\t");
scanf ("%f",&Resistencia);
printf ("Dame el valor de la Intencidad\t");
scanf ("%f",&Intencidad);
printf ("\n\n%s el voltaje es=%f ",nombre,Resistencia*Intencidad);
getch();
}                                          //  FIN DEL 1er IF
  else
	  {       // inicio 1er else
	  if(eleccion == 'B' || eleccion == 'b')
		{                                    //  INICIO DEL 2do IF
		 printf ("Dame el Voltaje\t");
		 scanf ("%f", &Voltaje);
		 printf ("Dame el valor de la Intencidad\t");
		 scanf ("%f",&Intencidad);
		 printf ("\n\n%s la Resistencia es = %f",nombre,Voltaje/Intencidad);
		 getch();
		}                                    // FIN DEL 2do IF
		else
			{    // INICIO 2do ELSE
			if( eleccion == 'C' || eleccion == 'c')
			 {                                // INICIO DEL 3er IF
			  printf ("Dame el Voltaje\t");
			  scanf ("%f",&Voltaje);
			  printf ("Dame la Resistencia\t");
			  scanf ("%f",&Resistencia);
			  printf ("\n\n%s la intencidad es = %f",nombre,Voltaje/Resistencia);
			  getch();
			  }                              //  FIN DEL 3er IF
			  else
				  {     // INICIO 3 er ELSE
				  if ( eleccion == 'D' || eleccion == 'd')
					{                          //  INICIO DEL 4to IF
					 printf("Dame la R1\t");
					 scanf ("%f",&R1);
					 printf ("Dame la R2\t");
					 scanf ("%f",&R2);
					 printf ("Dame la R3\t");
					 scanf ("%f",&R3);
					 printf ("Dame la R4\t");
					 scanf ("%f",&R4);
					 printf ("Dame la R5\t");
					 scanf ("%f",&R5);
					 printf ("\n\n%s la Resistencia en serie = %f",nombre, R1+R2+R3+R4+R5);
					 getch();
					}                          // FIN DEL 4to IF
					else    // INICIO 4to ELSE
						{
						 if( eleccion == 'E' || eleccion == 'e')
						 {                                       //INICIO DEL 5to IF
						 printf("Dame la R1\t");
						 scanf ("%f",&R1);
						 printf("Dame la R2\t");
						 scanf ("%f",&R2);
						 printf("Dame la R3\t");
						 scanf ("%f",&R3);
						 printf("Dame la R4\t");
						 scanf ("%f",&R4);
						 printf("Dame la R5\t");
						 scanf ("%f",&R5);
						 printf("\n\n%s la Resistencia en Paralelo es = %.2f ",nombre,1/(1/R1+1/R2+1/R3+1/R4+1/R5));
						 getch();
						 }                                      // FIN DEL 5to IF
						 else
							printf("\n\n\t%s tu eleccion fue incorrecta, checa el menu ",nombre);
		
						 }    // CIERRE DEL 4to ELSE
						getch ();
					  }  // CIERRE DEL 3er ELSE
			 }    // CIERRE DEL 2do ELSE
	 }  // CIERRE DEL 1er ELSE

}   //   FIN DEL main()

char Hola(){

printf("\n\nComo te llamas ");
scanf("%s",&nombre);
return 0;
}
