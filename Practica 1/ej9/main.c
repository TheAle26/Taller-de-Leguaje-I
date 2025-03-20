#include <stdio.h>
#include <stdlib.h>
/*Escriba un programa que lea 2 números enteros y un carácter, el cual debe corresponderse con un
operador matemático (+, -, /, x), y a partir de ellos imprima el resultado de realizar la operación
pedida en pantalla. En caso de que el carácter no represente un operador válido, imprima un
mensaje de error. Reflexione sobre las diferentes estructuras de control que puede utilizar.*/
int main()
{
int  x,y;
float res;
char op;
printf("Ingrese le primer numero: \n");
scanf("%d",&x);
printf("Ingrese el segundo numero: \n");
scanf("%d",&y);
printf("Ingrese operacion a realizar + - / *: \n");
scanf(" %c",&op);

while (!((op == '+')||(op =='-')||(op=='/')||(op=='*'))){
    printf("Ingreso no valido. \n");
    printf("Ingrese operacion a realizar + - / *: \n");
    scanf(" %c",&op);
}
switch (op){
case '+':
    res= x+y;
    break;
case '-':
    res=x-y;
    break;
case '/':
    res= (float) x/y;
    break;
case '*':
    res = x*y;
    break;
default:
    printf("Error inesperado.\n");
            return 1;

}
    printf("El resultado de %d%c%d es: %.2f",x,op,y,res);
return 0;
}
