#include <stdio.h>
#include <stdlib.h>
void intercambiarCaracter(char palabra[],char v,char n);
int main()
{
    char palabra[50]="asereje a eje asereje";
    intercambiarCaracter(palabra,'a','F');
    printf("%s!\n",palabra);
    return 0;
}

void intercambiarCaracter(char palabra[],char v,char n){

    int i=0;
    while (palabra[i] !='\0'){
        if (palabra[i] ==v){
            palabra[i]=n;
        }
        i++;
    }

}
