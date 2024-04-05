#include <stdio.h>

/* Archivos y cadenas de caracteres.
El programa escribe cadenas de caracteres en un archivo. */

void main(void)
{
    char cad[50];
    int res;
    FILE *ar;
    if ((ar = fopen("arc.txt", "w")) != NULL) /* Se abre el archivo para escritura. En la misma instrucción se verifica si se
    pudo abrir. */
    {
        printf("\n¿ Desea ingresar una cadena de caracteres? Si-1 No-0: ");
        scanf("%d", &res);
        while (res)
        {
            fflush(stdin);
            printf("Ingrese la cadena: ");
            fgets(cad, sizeof(cad), stdin); /* Utilizamos fgets para leer la cadena, en lugar de gets que es inseguro. */
            fputs(cad, ar); /* Observa la forma como se escribe la cadena en el archivo. */
            printf("¿ Desea ingresar otra cadena de caracteres? Si-1 No-0: ");
            scanf("%d", &res);
            if (res)

            fputs("\n", ar);/* Se indica un salto de linea, excepto en la última cadena. Si no se hiciera esta indicacion, la funcion
    fputs pegaria las cadenas y luego tendriamos dificultades en el momento de leerlas. Por otra parte, si realizaramos este salto de
    linea al final de la ultima cadena, en la escritura se repetiria la ultima cadena. */
        }
        fclose(ar);

    }
    else
        printf("No se puede abrir el archivo\n");
}


