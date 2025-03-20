#include <stdio.h>
#include <stdlib.h>
#define filas 3
#define columnas 5
void multiplicacionEscalarMatriz(int f,int c,int A[][c],int);
int main()
{
    int i,j,matriz[filas][columnas];
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            matriz[i][j]= rand()%10;
            printf("%3d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    multiplicacionEscalarMatriz(filas,columnas,matriz,2);
    return 0;
}

void multiplicacionEscalarMatriz(int f,int c,int A[][c],int multi){
    int i,j;
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            A[i][j]*=multi;
            printf("%3d ",A[i][j]);
        }
        printf("\n");
    }


}
