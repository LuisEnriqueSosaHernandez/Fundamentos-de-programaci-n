#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i;
    float f;
    printf ("Programa que convierte los grados Celsius a grados Fahrenheit");
    printf ("\nGrados \x43\xF8 \t\tGrados \x46\xF8");
    for (i=1; i<=20; i++)
    {

        f=((9.0/5.0)*i)+ 32;
        printf("\n%d \t\t\t%.2f", i, f);
    }
    return 0;
}
