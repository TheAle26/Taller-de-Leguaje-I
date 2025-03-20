#include <stdio.h>
#include <stdlib.h>
#define tamano 3

void mostrarTransversa(int f,int c,int A[][c]);
int main()
{
    int i,j,matriz[tamano][tamano];
    for(i=0;i<tamano;i++){
        for(j=0;j<tamano;j++){
            matriz[i][j]= rand()%10;
            printf("%3d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    mostrarTransversa(tamano,tamano,matriz);
    return 0;
}

void mostrarTransversa(int f,int c,int A[][c]){
    int i,j;
    for(j=0;j<c;j++){
            printf("%d\n",i);
        for(i=0;i<f;i++){
            printf("%3d ",A[i][j]);
        }
        printf("\n");

    }
}
