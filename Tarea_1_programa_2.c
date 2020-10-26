#include<stdio.h>
#include<stdlib.h>

int main(){

system("color 30");
printf("Numeros pares e impares.\n");

int value, a;

printf("Por favor introduzca un numero:");
scanf("%d",&value);

a=value%2;

if(a==0){
printf("El numero %d es par.",value);
}

else{
printf("El numero %d es impar.",value);
}

return(0);

}


