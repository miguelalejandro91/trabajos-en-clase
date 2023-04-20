/*
construir un programa en c Si 32768 es el tope 
superior para los números entero 
cortos, determinar cuál es el número primo más 
cercano por debajo de él.
*/


#include <stdio.h>

int main() {
    const int MAX_NUM = 32768;
    int nums[MAX_NUM]; 
    int i, j;    
    for (i = 0; i < MAX_NUM; i++) {
    nums[i] = i + 2;
    }    
    for (i = 0; i < MAX_NUM - 1; i++) {
    if (nums[i] != 0) {
    for (j = i + 1; j < MAX_NUM; j++) {
    if (nums[j] % nums[i] == 0) {
    nums[j] = 0;
                }
            }
        }
    }   
    int last_prime = 0;
    for (i = 0; i < MAX_NUM - 1; i++) {
    if (nums[i] != 0) {
    last_prime = nums[i];
        }
    }    
    printf("El número primo más cercano por debajo de 32768 es: %d\n", last_prime);
    return 0;
}