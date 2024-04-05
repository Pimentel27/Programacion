#include <stdio.h>

/* Archivos y cadenas de caracteres.
El programa lee cadenas de caracteres de un archivo. */

void main(void)

{
char cad[50];
FILE *ap;
if ((ap = fopen("arc.txt", "r")) != NULL) /* Se abre el archivo para lectura y se verifica si se abrio correctamente. */

    {
    while (fgets(cad, sizeof(cad), ap) != NULL) /* Mientras no se detecte el fin de archivo se siguen leyendo cadenas de caracteres. */
        {
            fgets(cad, 50, ap); /*Observa que la instruccion para leer cadenas requiere de tres argumento. */
            puts(cad); /* Despliega la cadena en la pantalla. */
        }
        fclose(ap);
    }
    else
        printf("No se puede abrir el archivo\n");
    }
