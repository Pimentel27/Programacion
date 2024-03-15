#include <stdio.h>
#include <ctype.h>

/* Decodifica.
El programa decodifica una cadena de caracteres compuestas por numeros y letras. */

void interpreta(char *);/* Prototipo de funcion. */
void main(void)
{
  char cad[50];
  printf("Ingrese la cadena de caracteres: ");
  gets(cad);
  interpreta(cad);
}
void interpreta(char *cadena)/* Esta funcion se utliza para decodificar la cadena de caracteres. */
 {
  int i = 0, j, k;
  while (cadena[i] != '\0')
    {
    if (isalpha(cadena[i]))/* Se utliza isalpha para observar si el caracter es una letra. */
     {
      k = cadena[i - 1] - '0'; /* En la variable k se almacena el ascii del numero convertido en caracter que nos interesa, menos
  48 que corresponde al ascii del digito 0. */

      for (j = 0; j < k; j++)
         putchar(cadena[i]);

    }
    i++;
    }
}
