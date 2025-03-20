#include <stdio.h>
#include <stdlib.h>

int main(){
char c= '@';
int x= 64;
printf("char c= %c\n", x);
printf("int x= %d\n", c);

    printf("Tamaño de tipos de datos en mi máquina:\n");
    printf("char: %lu byte(s)\n", sizeof(char));
    printf("int: %lu byte(s)\n", sizeof(int));
    printf("float: %lu byte(s)\n", sizeof(float));
    printf("double: %lu byte(s)\n", sizeof(double));
    printf("long int: %lu byte(s)\n", sizeof(long int));
    printf("long long int: %lu byte(s)\n", sizeof(long long int));
return 0;
}
