#include <stdio.h>
#include <stdlib.h>


void swap(int *a, int* b);

int main()
{
    int x, y;
    x = 10;
    y = 20;
    printf("x=%d\ty=%d\n",x,y);
    swap(&x, &y);
    printf("x=%d\ty=%d\n",x,y);
    return 0;
}

void swap(int *a, int *b)
{
    int tmp;

    tmp = *a; // guarda el valor de a
    *a = *b;   // almacena b en a
    *b = tmp; // almacena a en b
}
