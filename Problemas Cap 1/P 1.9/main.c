#include <stdio.h>

/*Estancia
El programa, al recibir como datos la superficie de una estancia expresada en acres, la convierte a hect�reas.

ECA: variable de tipo real. */

void main(void)
{
   float ECA;
    printf("Ingrese la extensi�n de la estancia: ");
    scanf("%f", &ECA);
    ECA = ECA * 4047 / 10000;
    printf("\nExtension de la estancia en hect�reas: %5.2f" , ECA);

}
