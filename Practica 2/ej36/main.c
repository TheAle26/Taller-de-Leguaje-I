#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void informarCantidadLetras(char[]);
int main()
{
    printf("%d\n",'a');
    int prueba[10]={0};
    prueba['a'-97]++;
    printf("%d\n",prueba[0]);
    printf("Ingrese una palabra!\n");
    char palabra[30];
    scanf("%s",palabra);
    informarCantidadLetras(palabra);

    return 0;
}

void informarCantidadLetras(char palabra[]){
int contador[26]={0};
int i;
int largo = strlen(palabra);
for(i=0;i<largo;i++){
    contador[palabra[i]-97]++;

}
for(i=0;i<26;i++){
    printf("La letra %c aparece %d veces.\n",i+97,contador[i]);
}

}
