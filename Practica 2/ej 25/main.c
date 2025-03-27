#include <stdio.h>
void swap(int *a, int* b);

int main(){
int vector[10]={10,20,30,40,50,60,70,80,90,100};
int i;
int *p= vector;
for (i=0; i<10; i++){
printf("vector[%d] = %d \n", i, vector[i]);
}
alternarVector(vector,10);
for (i=0; i<10; i++){
printf("vector[%d] = %d \n", i, vector[i]);
}
return 0;
}

void alternarVector(int *v,int largo){
int i;
for(i=0;i<largo/2;i++){
    swap(v+i,v+largo-1-i);
}

}

void swap(int *a, int *b)
{
    int tmp;

    tmp = *a; // guarda el valor de a
    *a = *b;   // almacena b en a
    *b = tmp; // almacena a en b
}
