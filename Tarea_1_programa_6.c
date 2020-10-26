#include <stdio.h>
#include<stdlib.h>
int main(){
system("color 30");

printf("Division de dos numeros (a entre b).\n");

float a;
float b;

printf("Por favor introduzca un dividendo:");
scanf("%f",&a);

printf("Por favor introduzca un divisor:");
scanf("%f",&b);

if(b==0){
printf("Error matematico, la division entre 0 no esta permitida.\a\n",b==0);
printf("Por favor ingrese otro numero distinto a cero.");
}

else{
float division = a/b;

printf("El resultado de la division es: %.2f\n",division);
}

return(0);

}
