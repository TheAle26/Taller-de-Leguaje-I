
/*Escriba un programa que genere 50 números enteros en forma pseudoaleatoria y que los almacene en
un arreglo unidimensional. Luego de realizada la carga, informar la cantidad de números pares que
se encuentran en posiciones impares del arreglo y también la cantidad de números impares que se
encuentran en posiciones pares.*/
#define tamano 50
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,pares=0,impares=0, arreglo[tamano]={0};

    for(i=0;i<tamano;i++){
        arreglo[i]=rand();
    }

    for(i=0;i<tamano;i+=2){
        if(!(arreglo[i]%2)){
           pares++;
        }
    }
     for(i=1;i<tamano;i+=2){
        if((arreglo[i]%2)){
           impares++;
        }

    }
    printf("pares:%d impares: %d\n",pares,impares);
    return 0;
}
