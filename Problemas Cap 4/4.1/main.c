#include <stdio.h>

/*Cubo -1.
El programa calcula el cubo de los 10 primeros numeros naturales con la ayuda de una funcion.
En la soluccion del problema se utiliza variables global, aunque esto, como veremos mas adelante
no es muy recomendable. */


int cubo(void); /* Prototipo de funci�n. */
int I; /* Variable global. */

int main(void)
{
    int CUB;
    for (I = 1; I <= 10; I++)
    {
        CUB = cubo(); /* Llamada a la funci�n cubo. */
        printf("\nEl cubo de %d es: %d", I, CUB);
    }
}

int cubo(void) /* Declaraci�n de la funci�n. */
/* La funci�n calcula el cubo de la variable global I. */
{
    return (I*I*I);
}
