#include <stdio.h>
# include <conio.h>
main() {
int n1 = 5, n2 = 2;
float division1, division2;
printf("\n\n\tMis números son %d y %d", n1, n2);
division1 = n1/n2;
printf("\n\n\t y su division es %f", division1 );
division2 = (float) n1 / n2;
printf("\n\n\t pero si convierto antes a float: %f", division2 );
getch();
}