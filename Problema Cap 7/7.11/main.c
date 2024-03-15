#include <stdio.h>
#include <ctype.h>

/* Verifica.
El programa, al recibir como datos una cadena de caracteres y una posicion especifica en la cadena, determina
si el caracter correspondiente es una letra minuscula.*/

void main(void)
{
  char p, cad[50];
  int n;
  printf("Ingrese la cadena de caracteres (maximo 50): ");
  gets(cad);
  printf("Ingrese la posicion en la cadena que desea verificar: ");
  scanf("%d", &n);
  if ((n >= 0) && (n < 50))
    {
    p = cad[n - 1];
    if (islower(p)) {
      printf("\n%c es una letra minuscula\n", p);
    } else {
      printf("\n%c no es una letra minuscula\n", p);
    }
  } else {
    printf("El valor ingresado de n es incorrecto\n");
  }
}
