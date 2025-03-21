#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cant=0;
    char palabra[50];
    printf("Ingrese palabras. ingrese \"XXX\" para finalizar.!\n");
    scanf("%s",palabra);
    while (strcmp(palabra,"XXX")){
        if(palabra[strlen(palabra)-1]=='o'){cant++;}
        printf("Ingrese palabras. ingrese \"XXX\" para finalizar.!\n");
    scanf("%s",palabra);
    }
    printf("%d",cant);
    return 0;
}
