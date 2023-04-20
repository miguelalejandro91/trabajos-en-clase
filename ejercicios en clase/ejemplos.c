/* construir un programa en c que determine si un numero entero positivo
ingresado por el usuario es un numero primo o no, utilice el concepto de funcion
*/


#include <stdio.h>
int esprimo(int num) {
int i;
if (num < 2) {
return 0;
    }
for (i = 2; i < num; i++) {
if (num % i == 0) {
return 0;
        }
        
    }
return 1;
}
int main() {
int num;
printf("Ingrese un numero entero positivo: ");
scanf("%d", &num);
if (esprimo(num)) {
printf("%d es un numero primo\n", num);
    } else {
printf("%d no es un numero primo\n", num);
    }
return 0;
}