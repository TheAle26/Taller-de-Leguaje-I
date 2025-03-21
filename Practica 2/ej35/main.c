#include <stdio.h>
#include <stdlib.h>

char* miStrcpy(char[],char[]);

int main()
{
    char p1[31]="123567890qwertyuiopala ACAAAA";
    char p2[30]="pepe";
    printf("%s!\n",p1);
    printf("%s!\n",miStrcpy(p1,p2));
    p2[2]='S';
    printf("%s!\n",p1);

    return 0;
}

char* miStrcpy(char p1[],char p2[]){
int i;

for(i=0;p2[i]!='\0';i++){
    p1[i]=p2[i];
}
p1[i]='\0';

return p1;
}
