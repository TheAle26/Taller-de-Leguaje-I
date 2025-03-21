#include <stdio.h>
#include <stdlib.h>
void verFrecuencia(int,int[]);
void mostrarFrecuencias(int[]);
int main()
{
    int n, frecuencias[10]={0};
    printf("ingrese numero entero: \n");
    scanf("%d",&n);
    verFrecuencia(n,frecuencias);
    mostrarFrecuencias(frecuencias);

    return 0;
}

void verFrecuencia(int n,int f[]){
int digito;
while(n>0){
digito=n%10;
f[digito]++;
n/=10;
}
}

void mostrarFrecuencias(int f[]){
int i;
for(i=0;i<10;i++){
    printf("El numero %d aparece %d veces. \n",i,f[i]);
}

}
