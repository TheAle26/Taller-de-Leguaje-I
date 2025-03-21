#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int esPolindroma(char palabra[]);
int main()
{
    char palabra[12]="abccba";

    printf("%d\n",esPolindroma(palabra));
    return 0;
}
int esPolindroma(char palabra[]){

int i,j;
j = strlen(palabra) - 1;
for (i=0;i<j;i++,j--){
        printf("%d %d\n",i,j);
    if (palabra[i]!=palabra[j]){
        return 0;
    }
}
return 1;
}
