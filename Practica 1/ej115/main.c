#include <stdio.h>
#include <stdlib.h>


int factorial_iterativo(unsigned int n){
    unsigned int i=2,factorial=1;
    for(;i<=n;i++){
        factorial *=i;
    }

return factorial;
}

unsigned int factorial_recursivo(unsigned int n){
    if (n>1){
        return ((factorial_recursivo((n-1)))*n);
    }
    return 1;

}

int main()
{
    unsigned int i;
    i = 0;
    printf("%u! es %u\n",i,factorial_iterativo(i));
    printf("%u! es %u\n",i,factorial_recursivo(i));
    return 0;
}

