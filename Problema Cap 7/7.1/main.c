#include <stdio.h>

/* Funciones para el manejo de caracteres de la biblioteca stdio.h */

void main(void)
{
char p1, p2, p3 = '$';
/* Declaracion de las variables tipo caracter p1, p2 y p3. Observa que a p3 se le asigna el simbolo $. */

printf("\nIngrese un caracter: ");
p1=getchar();/* Se utiliza la funcion getchar para leer un caracter. */
putchar(p1);/* Se utiliza la funcion putchar para escribir un caracter. */
printf("\n");
fflush(stdin);

/* Luego de leer un caracter siempre es conveniente escribir la funcion fflush para limpiar el bufer, porque
generalmente queda con basura y genera error en la ejecucion del programa. El error se produce porque cuando
se ingresa un dato se oprime el return y luego cuando volvemos a leer un caracter o una cadena de caracteres
se toma a ese return como el nuevo dato ingresado. */

printf("\nEl caracter p3 es: ");
putchar(p3);

/* Se utliza la funcion putchar para escribir el caracter almacenado en p3. */

printf("\n");
printf("\nIngrese otro caracter: ");
scanf("%c", &p2);

/* Se puede utlizar scanf con el formato de variable %c para leer un caracter. */

printf("\%c", p2);

/* Se puede utilizar printf con el formato de variable %c para escribir un caracter. */

}
