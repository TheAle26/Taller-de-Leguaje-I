#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int es_primo(int n){
    if (n <= 1) return 0;  // No son primos
    if (n == 2) return 1;  // 2 es primo
    if (n % 2 == 0) return 0;  // Números pares (excepto 2) no son primos
    int i;
    for(i = 3; i <= sqrt(n); i += 2){
        if ((n%i)==0){
            return 0;
        }
    }
    return 1;
}


int main()
{
    int cant_primos=0,i;
  /*  if (es_primo(i)){
        printf("El numero %d es primo\n",i);
    }
    else {
        printf("El numero %d NO es primo\n",i);
    }*/
    while (cant_primos<5){
        printf("Ingrese un numero entero. al ingresar 5 primos el programa termina. Hay %d primos\n",cant_primos);
        scanf("%d",&i);
        printf("Numero %i ingresado.\n",i);
        if (es_primo(i)){
            cant_primos++;
        }
    }

    return 0;
}
