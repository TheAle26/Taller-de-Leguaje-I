#include <stdio.h>
#include <stdlib.h>
#define cantidad 6
void iniciarVector(int[],int);
void calcularDatosVector(int[],int,int*,int*,float*);
int main()
{
    int v[cantidad];
    int maximo,minimo;
    float promedio;
    iniciarVector(v,cantidad);
    imprimirVector(v,cantidad);
    calcularDatosVector(v,cantidad,&maximo,&minimo,&promedio);


    printf("max:%d min:%d prom:%.2f\n",maximo,minimo,promedio);
    return 0;
}

void iniciarVector(int v[],int cant){
int i;
for (i=0;i<cant;i++){
    v[i]=rand()%10;
}
}
void imprimirVector(int v[],int cant){
int i;
for (i=0;i<cant;i++){
    printf("%d ",v[i]);
}
printf("\n");
}

void calcularDatosVector(int v[],int cant,int *maximo,int *minimo,float *prom){
    *maximo=v[0];
    *maximo=v[0];
    int i;
    float suma=v[0];
    for(i=1;i<cant;i++){
        if(v[i]>*maximo){
            *maximo=v[i];
        }
        else if(v[i]<*minimo){
            *minimo=v[i];
        }
        suma+=v[i];
        *prom=((float)suma/cant);
    }
}
