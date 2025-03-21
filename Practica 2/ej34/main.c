#include <stdio.h>
#include <stdlib.h>

int strlenMio(char []);
int main()
{
    char palabra[30]="123456789";

    printf("%d\n",strlenMio(palabra));
    return 0;
}

int strlenMio(char palabra[]){
    int i=0,cant=0;
    while(palabra[i]!='\0'){
        cant++;
        i++;
    }
    return cant;

}
