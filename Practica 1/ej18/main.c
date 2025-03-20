#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    srand(4);
    for(n=0;n<10;n++){
    i=rand()%100;
    printf("%d\n",i);}
    return 0;
}
