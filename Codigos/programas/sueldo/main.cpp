/*dado como dato el sueldo del trabajador aumentele un aummento de 15 % si su sueldo es
inferior a mil imprima en este caso el nuevo sueldo
 del trabajador */

 #include <stdio.h>
 #include <conio.h>
 int main()
 {
     float s;
     printf("\n\n\t Dame el sueldo del trabajador ");
     scanf("%f",&s);
     if(s <1000)
     {
         s=s*1.15;
         printf("n\n\t El sueldo nuevo es %.2f",s);

     }
     else
     printf("n\n\t El sueldo no subio xD%.2f ",s);
     getch();
        return 0;

}
