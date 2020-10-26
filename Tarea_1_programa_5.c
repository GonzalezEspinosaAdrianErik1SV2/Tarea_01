#include<stdio.h>
#include<stdlib.h>
#define PI 3.1416
int main(){

system("color 30");

printf("Calculadora del area y el perimetro de un circulo.\n");

float radio;

printf("Por favor introduzca el valor del radio:");
scanf("%f",&radio);

float AREA = PI*radio*radio;
float PERIMETRO = (PI+PI)*radio;

printf("El valor del area es: %.2f\n",AREA);
printf("El valor del perimetro es: %.4f\a",PERIMETRO);

 return(0);
}
