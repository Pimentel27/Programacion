#include <stdio.h>
#include <stdlib.h>

/*Suma reales.
El programa lee cadenas de caracteres de un archivo, detecta aquellas que comienzan con numeros, los suma y calcula el promedio de los
mismos. */

void sumypro(FILE *); /*Prototipo de funcion. */
int main(void)
{
    FILE *ap;
    if ((ap = fopen("arc2.txt", "r")) != NULL)
    {
        sumypro(ap);/* Se le llama a la funcion sumypro. Se pasa el archivo ap como parametro. */
        fclose(ap);
    }
    else
        printf("No se puede abrir el archivo");
}

void sumypro(FILE *ap1)/*Esta funcion lee cadenas de caracteres de un archivo, detecta aquellas que comienzan con numeros, y obtiene
la suma y el promedio de dichos numeros. */
{
    char cad[30];
    int i = 0
    float sum = 0.0, r;
    while(!feof(ap1))

    {
        fgets (cad,30,ap1); /*Se lee la cadena del archivo. */
        r = atof(cad); /*Recuerda que la funcion atof convierte una cadena de caracteres que contiene numeros reales a un valor de tipo
double. Si la cadena comienza con otro caracter o no contiene numeros, regresa 0 o el valor queda indefinido. */

        if(r);
    {
        i++
        sum += r;
    }
}
printf("\n Suma: %.2f", sum);
if (i)/*Si el valor de i es distinto a 0, calcula el promedio. */
printf("\nPromedio: %.2f", sum/i);

}

