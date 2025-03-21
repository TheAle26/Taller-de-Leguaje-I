#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char palabra[30];
    int cant = 0;

    printf("Ingrese palabras (finaliza con la palabra \"ZZZ\"):\n");
    scanf("%s", palabra);  // Leer la primera palabra

    while (strcmp(palabra, "ZZZ") != 0) {  // Mientras no sea "ZZZ"
        if (strlen(palabra) == 5) {
            cant++;
        }
        printf("Ingrese otra palabra (o \"ZZZ\" para salir):\n");
        scanf("%s", palabra);  // Leer la siguiente palabra
    }

    printf("Cantidad de palabras de 5 letras ingresadas: %d\n", cant);

    return 0;
}
