#include <stdio.h>
#include <ctype.h>

/*Cuenta letras minusculas y mayusculas.
El programa, al recibir como dato una frase, determina el numero de letras minusculas y mayusculas que exisiten en la frase. */

void main(void)
 {
  char cad[50];
  int i, mi = 0, ma = 0;

  printf("Ingrese la cadena de caracteres (maximo 50 caracteres): ");
  gets(cad);
  for (i = 0; cad[i] != '\0'; i++) {
    if (islower(cad[i])) {
      mi++;
    } else if (isupper(cad[i])) {
      ma++;
    }
  }

  printf("\n\nNumero de letras minusculas: %d\n", mi);
  printf("Numero de letras mayusculas: %d\n", ma);

 }

