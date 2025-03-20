#include <stdio.h>
#include <stdlib.h>
int damePar();
int main()
{
    int n,j;
    printf("Veces a ejecutar:\n ");
    scanf("%d",&n);

    for(j=0;j<n;j++){
        printf("%d\n",damePar());
    }
    return 0;
}

int damePar(){
static int i=0;
return (2*(i++));
}
