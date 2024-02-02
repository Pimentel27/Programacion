#include <stdio.h>

/* Incremento de precio.
El programa, al recibir como dato el precio de un producto, incrementa el mismo 11%
si es menor a 1500$ y 8% en caso contrario (mayor o igual)

PRE y NPR: variable de tipo real. */

void main(void)
{
    float PRE, NPR;
    printf("Ingrese el precio del producto: ");
    scanf("%f", &PRE);
    if (PRE < 1500)
        NPR = PRE * 1.11;
        NPR = PRE * 1.08;
    printf("\nNuevo precio del producto: %8.2", NPR);
    return 0;
}
