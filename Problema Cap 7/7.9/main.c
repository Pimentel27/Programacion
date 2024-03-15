#include <stdio.h>


/* Cuanta caracteres.
El programa, al recibir como datos una cadena de caracteres y un caracter, cuenta cuantas veces se encuentra en la cadena. */

int cuenta(char *cad, char car); /*Protoipo de fincion. */

void main(void) {
  char car, cad[50];
  int res;

  printf("Ingrese la cadena de caracteres: ");
  gets(cad);

  printf("Ingrese el caracter: ");
  car = getchar();

  res = cuenta(cad, car);

  printf("\n\n%c se encuentra %d veces en la cadena %s\n", car, res, cad);
}

int cuenta(char *cad, char car) /* Esta funcion para obtener el numero de veces que se encuentra el caracter en la cadena. */
 {
  int i, r = 0;
  for (i = 0; cad[i] != '\0'; i++)
    {
    if (cad[i] == car)
     {
      r++;
    }
  }

  return r;
}
