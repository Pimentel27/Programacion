#include <stdio.h>
#include <time.h>

#define ARRAY_SIZE 10

// Declaracion de variables
int i;
int change;
int n;
int a[ARRAY_SIZE];
int buf;
time_t seed;

// Inicia el del desarrollo del programa con main a 0

int main(int argc, char* argv[])

{
  seed = 0;

   // Inicia el generador de numeros aleatorios

  srand(time(&seed));

  // Calcula el tamaño real del array

  n = sizeof(a) / sizeof(*a);

  // Completa el array con los números aleatorios entre 0 y 999

  for (i = 0; i < n; i++) {
    a[i] = rand() % 1000;
  }

  // Imprime los elementos del array antes de estar ordenados

  for (i = 0; i < n; i++) {
    printf("Element a[%d]: %d\n", i, a[i]);
  }

  // Con el change en 1 se inicia el proceso de ordenación
  change = 1;

  // Bucle destinado a la ordenación

  while (change == 1)

    {
    //  Se reinicia  el change a 0 al inicio de cada pasada

    change = 0;

    // Bucle destinado a comparar e intercambiar elementos adyacentes

    for (i = 0; i < n - 1; i++)
        {
      // Si el elemento actual es mayor que el siguiente este intercambia sus posiciones
      if (a[i] > a[i+1]) {
        buf = a[i];
        a[i] = a[i+1];
        a[i+1] = buf;

    // Indicacion que se ha realizado un cambio
        change = 1;
      }
    }
  }

  // Imprime los elementos del array ya ordenados

  printf("\n----------------\n");
  for (i = 0; i < n; i++) {
    printf("Element a[%d]: %d\n", i, a[i]);
  }

  return 0;  // Se retorna 0 estableciendo que el programa se ejecuto correctamente
}
