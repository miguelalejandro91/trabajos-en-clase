/*
construir un programa en c Leer dos números enteros y determinar 
a cuánto es igual el producto mutuo del primer dígito de cada uno.
*/

#include <stdio.h>

int main() {
    int num1, num2;
    int dig1_num1, dig1_num2;
    int producto_mutuo;
       
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
        
    dig1_num1 = num1;
    while (dig1_num1 >= 10) {
        dig1_num1 /= 10;
    }
    dig1_num2 = num2;
    while (dig1_num2 >= 10) {
        dig1_num2 /= 10;
    }
       
    producto_mutuo = dig1_num1 * dig1_num2;
        
    printf("El producto mutuo del primer dígito de %d y %d es %d.\n", num1, num2, producto_mutuo);
    
    return 0;
}