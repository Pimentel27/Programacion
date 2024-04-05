#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*Remplaza palabras.
El programa lee cadenas de caracteres de archivo y vez que encuentra la palabra Mexico escrita de forma incorrecta la primera
minuscula la remplaza por su forma correcta y escribe la cadena en otro archivo. */

void cambia(FILE *, FILE *);/*Portoipo de funcion. Se pasan dos archivos como parametros. */
int main(void)
{
    FILE *ar;
    FILE *ap;
    ar = fopen("arc.txt", "r"); /*Se abre el archivo arc.txt para lectura. */
    ap = fopen("arc1.txt", "w");/*Se abre el archivo arc1.txt para escritura. */
    if (ar != NULL && ap != NULL)
    {
        cambia(ar, ap);
        fclose(ar);
        fclose(ap);
    }
    else
        printf("No se pueden abrir los archivos");
}

void cambia(FILE *ap1, FILE *ap2)/* Esta funcion reemplaza en la cadena de caracteres la palabra mexico escrita en minuscula
la primera letra por su forma correcta y escribe la cadena de caracteres en un nuevo archivo. */

{
    char cad1[100], *cad2;
    while(fgets(cad1, 100, ap1) != NULL)
    {
        cad2 = strstr(cad1, "mexico");/*Localiza la subcadena mexico en cad1.*/
        while(cad2 != NULL)
        {
            cad2[0] = 'M'; /*Remplaza la letra minuscula por la mayuscula. */
            cad2 = strstr(cad2 + 1, "mexico");
        }
        fputs(cad1, ap2);
    }
}
