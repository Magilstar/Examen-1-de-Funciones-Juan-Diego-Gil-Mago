/*Programa que suma 2 variables pero con funcion*/

#include <stdio.h>
//Se declaran la funcion de sumar y que toma datos
int Sum(int a, int b);
int main() {
    int num1, num2;
    printf("La suma de los 2 numeros es: %d", Sum(num1, num2));
    return 0;
}
int Sum (int a, int b){
    int resultado;
    printf("Ingrese los valores a sumar: \nValor 1: ");
    scanf("%d", &a);
    printf("Valor 2: ");
    scanf("%d", &b);
    resultado = a + b;
    return resultado;
}

