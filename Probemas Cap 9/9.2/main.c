#include <stdio.h>

/* Archivos y caracteres.
El programa lee caracteres de un archivo. */

void main(void)
{
    char p1;
    FILE *ar;
    if ((ar = fopen("arc.txt", "r")) != NULL) /* Se abre el archivo para lectura. */
    /* Observa que las dos instrucciones del programa 9.1 necesarias para abrir un archivo y verificar que este en realidad se haya
    abierto, se pueden agrupar en una sola instruccion. */

    {
    while ((p1 = fgetc(ar)) != EOF) /* Se lee el caracter del archivo y se compara con EOF para detectar el fin del archivo. */

      {
        p1 = fgetc(ar); /*Lee el caracter del archivo. */
         putchar(p1); /* Despliega el caracter en la pantalla. */

      }

        fclose(ar);
    }
    else
    {
        printf("No se puede abrir el archivo\n");
    }
}

