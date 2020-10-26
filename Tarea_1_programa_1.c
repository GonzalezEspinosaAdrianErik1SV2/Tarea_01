#include<stdio.h>
#include<stdlib.h>
int main(){

system("color 30");
printf("El mayor y el menor de dos numeros.\n");

float a;
float b;

printf("Por favor introduza un numero:");
scanf("%f",&a);

printf("Por favor introduzca otro numero:");
scanf("%f",&b);

if(a>b){
printf("%.0f es el numero mayor.\n\a",a);
printf("%.0f es el numero menor.\n",b);
}

if(a<b){
printf("%.0f es el numero mayor.\n\a",b);
printf("%.0f es el numero menor.\n",a);
}

if(a==b){
printf("Los numeros son iguales.\a");
}

return(0);
}
