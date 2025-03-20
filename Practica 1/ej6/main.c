#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i=2;

    printf("Ingrese los Km\n");
    scanf("%f",&i);
    printf("%.2fKm son %.2f Millas.\n",i,(i/1.61));
    return 0;
}
