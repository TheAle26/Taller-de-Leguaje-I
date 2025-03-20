#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  i = 1;

 for (;i<=10;i++){
        printf("Numero: %d. Raiz cuadrada: %.2f. Cuadrado: %d. Cubo: %d\n",i,sqrt(i),(int) pow(i,2),(int) pow(i,3));

 }
    return 0;

}
