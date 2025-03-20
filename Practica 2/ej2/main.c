#include <stdio.h>
#include <stdlib.h>
/*Escriba 3 funciones que reciban un arreglo unidimensional de float y que:
a. retorne el promedio de sus valores.
b. retorne el mínimo de sus valores.
c. retorne la posición del máximo de sus valores.*/
#define tamano 2
float funcionPromedio(float []);
float funcionMinimo(float []);
float funcionMaximo(float []);
int main()
{   float arreglo[tamano]={0};
    int i;
    for(i=0;i<tamano;i++){
        arreglo[i]=rand()%10;
        printf("%.2f ",arreglo[i]);
    }
    printf("\n");
    printf("Minimo: %.3f\nMaximo: %.2f\n Promedio: %.2f\n",funcionMinimo(arreglo),funcionMaximo(arreglo),funcionPromedio(arreglo));
    return 0;
}

float funcionMinimo(float v[]){
    int i;
    float minimo=v[0];
    for(i=1;i<tamano;i++){
        minimo = ((minimo>v[i])? v[i]:minimo);
    }
    return minimo;
}

float funcionPromedio(float v[]){
    int i;
    float promedio=v[0];
    for(i=1;i<tamano;i++){
        promedio+=v[i];
    }
    return promedio/tamano;
}

float funcionMaximo(float v[]){
        int i;
    float maximo=v[0];
    for(i=1;i<tamano;i++){
        maximo = ((maximo<v[i])? v[i]:maximo);
    }
    return maximo;
}
