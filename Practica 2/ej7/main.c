#include <stdio.h>
#include <stdlib.h>
#define dias 30
#define meses 12
#define anos 10
void inicializarMatriz(int d,int m,int a, int A[][m][a]);
int lluviaMes(int d, int m, int a, int A[][m][a]);
int main()
{
    int lluvias[dias][meses][anos]={0};
    inicializarMatriz(dias,meses,anos,lluvias);
    int d,m,a;
    int mesMax,anoMax,cantMesMax,cantAnomax,auxAno,auxMes;
    for(a=0;a<anos;a++){
        auxAno=0;cantMesMax=0;
        for(m=0;m<meses;m++){
            auxMes=lluviaMes(dias,meses,anos,lluvias);
            if (auxMes>cantMesMax){
                cantMesMax=auxMes;
                mesMax=m;
            }
            printf("%d \n",auxMes);
            auxAno+=auxMes;
        }


    }

    printf("Hello world!\n");
    return 0;
}
int lluviaMes(int d,int m,int a,int A[][m][a]){
int i, aux=0;
for(i=0;i<d;i++){
    aux+=A[i];
}
return aux;
}

void inicializarMatriz(int d,int m,int a, int A[d][m][a]){
int i,j,x,p=1;

for(i=0;i<d;i++){

    for(j=0;j<m;j++){
        for(x=0;x<a;x++){
        A[i][j][x]=rand()%10;

        };
    }
}
}
