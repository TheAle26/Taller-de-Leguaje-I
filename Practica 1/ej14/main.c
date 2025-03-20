#include <stdio.h>
#include <stdlib.h>


int invertir_numero(int n){
    int aux,invertido=0;
    while (n>0){
        invertido*=10;
        aux= n%10;
        invertido+=aux;
        n/=10;
    }
    return invertido;
}
int main()
{
    int n=123894;
    printf("%d\n",invertir_numero(n));
    return 0;
}
