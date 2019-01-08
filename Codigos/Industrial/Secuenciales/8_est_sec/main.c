#include <stdio.h>
#include <stdlib.h>

int main()
{
    double celsius;
    printf("Iserte la temperatura en celsius\n");
    scanf("%lf",&celsius);
    printf("La temperatura en F es: %.2lf",(celsius*9/5+32));
    return 0;
}
