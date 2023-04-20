#include <stdio.h>

int main() {
    int num1, num2, suma;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    suma = num1 + num2;

    printf("La suma de los numeros ingresados es: %d\n", suma);

    return 0;
}