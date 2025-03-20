#include <stdio.h>
#include <stdlib.h>

int hacerPregunta();
int main()
{
    srand(33);
    int i,correctas=0;
    for(i=0;i<4;i++){
        correctas=correctas + hacerPregunta();
    }
    printf("Nota: ");
    switch (correctas){
case 4:
    printf("A");
    break;
case 3:
    printf("B");
    break;
case 2:
    printf("C");
    break;
case 1:
    printf("D");
    break;
default:
    printf("E");
    }
    return 0;
}

int hacerPregunta(){
int a,b,c;
a=rand()%101;
b=rand()%101;
printf("%d + %d= \n",a,b);
scanf("%d",&c);
return (c==(a+b));
}
