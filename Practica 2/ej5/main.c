#include <stdio.h>
#include <stdlib.h>
#define filas 5
#define columnas 2

void inicializarMatriz(int f,int c, int A[][c]);
void sumarMatrices(int f,int c, int A[][c],int B[][c],int C[][c]);

int main()
{
    int A[filas][columnas]={0},B[filas][columnas]={0},C[filas][columnas]={0};
    inicializarMatriz(filas,columnas,A);
        printf("\n");
    inicializarMatriz(filas,columnas,B);
        printf("\n");
    sumarMatrices(filas,columnas,A,B,C);

    return 0;
}


void sumarMatrices(int f,int c, int A[][c],int B[][c],int C[][c]){
int i,j;

for(i=0;i<f;i++){
    for(j=0;j<c;j++){
        C[i][j]=A[i][j]+B[i][j];
        printf("%4d",C[i][j]);
    }
    printf("\n");
}

}

void inicializarMatriz(int f,int c, int A[][c]){
int i,j;

for(i=0;i<f;i++){

    for(j=0;j<c;j++){
        A[i][j]=rand()%20;
        printf("%4d",A[i][j]);
    }
    printf("\n");
}
}
