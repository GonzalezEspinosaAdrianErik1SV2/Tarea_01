#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

system("color 30");
printf("Calculadora de las raices de una ecuacion cuadratica.\n");

float a;
float b;
float c;
float X1;
float X2;

printf("Por favor introduzca el valor de 'a':");
scanf("%f",&a);

printf("Por favor introduzca el valor de 'b':");
scanf("%f",&b);

printf("Por favor introduzca el valor de 'c':");
scanf("%f",&c);

X1=-b/2*a+sqrt(pow(b,2)-4*a*c)/2*a;
X2=-b/2*a-sqrt(pow(b,2)-4*a*c)/2*a;

if(pow(b,2)-4*a*c<0){
    printf("Esta ecuacion no tiene raices reales.\n\a");
    printf("Lo que quiere decir que sus raices son complejas.");
}
else{
    printf("Las raices de la ecuacion son:\n");
    printf("X1=%.2f\n",X1);
    printf("X2=%.2f\n",X2);
}

return(0);

}
