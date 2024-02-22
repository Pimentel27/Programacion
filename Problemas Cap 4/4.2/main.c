#include <stdio.h>

/* Cubo-2.
El programa calcula el cubo de los 10 primeros numeros naturales con l ayuda de una funcion. */


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
/* La funci�n calcula el cubo de la variable local I. */
{
    int local_I = 2; /* Variable local entera I con el mismo nombre que la variable global. */

    return (local_I * local_I * local_I);
}
