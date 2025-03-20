#include <stdio.h>
#include <stdlib.h>

/*
int main(){
    for (int i=1;i<=50;i++){
        if ((i%5)==0)
            printf("El numero %d es multiplo de 5\n",i);
        else
            printf("El numero %d no es multiplo de 5\n",i);
    }
    return 0;
}
*/
int main()
{
    int x,i;
    x = 5;
    for(  i = 5;i<=50;i+=5){
        printf("%d\n",i);
    }

     i = 1;
     while (i<=50){
        if ((i%5)==0){
            printf("%d\n",i);
        }
        i++;
     }
    return 0;
}
