#include <stdio.h>
#include <stdlib.h>


void  maxMin(int,float*,float*);
int main()
{   float maximo,minimo;
    int n;
    printf("Ingrese cantidad de numeros a entrar por teclado\n");
    scanf("%d",&n);
    maxMin(n,&maximo,&minimo);
    printf("El maximo es %f y el minimo es %f.\n",maximo,minimo);
    return 0;
}

void maxMin(int n,float *maximo,float *minimo){
int i;
float aux;
for(i=1;i<=n;i++){
    scanf("%f",&aux);
    if (aux>*maximo){*maximo=aux;}
    if (aux<*maximo){*minimo=aux;}
    }

}
