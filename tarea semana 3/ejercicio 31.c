/**
 * construir un programa en c que Leer números hasta que digiten 
0 y determinar a cuánto es igual el promedio 
de los números terminados en 5. */



#include <stdio.h>

int main() {
   int num, total=0, count=0;
   float avg;

   do {
      printf("Ingrese un numero (0 para terminar): ");
      scanf("%d", &num);

      if (num % 10 == 5) {
         total += num;
         count++;
      }
   } while (num != 0);

   if (count == 0) {
      printf("No ingreso numeros terminados en 5\n");
   } else {
      avg = (float) total / count;
      printf("El promedio de los numeros terminados en 5 es: %.2f\n", avg);
   }

   return 0;
}