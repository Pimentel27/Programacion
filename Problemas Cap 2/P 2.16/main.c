#include <stdio.h>


/* Empresa textil.

El programa, al recibir como datos decisivos la categoría y antigüedad de un empleado,
determina si el mismo reúne las condiciones establecidas por la empresa para ocupar un nuevo cargo en una sucursal. */

int main(void)
{
    int CLA, CAT, ANT, RES;
    printf("Ingrese la clave, categoría y antigüedad del trabajador:");
    scanf("%d %d %d", &CLA, &CAT, &ANT);
    switch (CAT)
    {
    case 3:
    case 4:
        if (ANT >= 5)
            RES = 1;
        else
            RES = 0;
        break;
    case 2:
        if (ANT >= 7)
            RES = 1;
        else
            RES = 0;
        break;
    default:
        RES = 0;
        break;
    }
    if (RES)
        printf("\nEl trabajador con clave %d reúne las condiciones para el puesto", CLA);
    else
        printf("\nEl trabajador con clave %d no reúne las condiciones para el puesto", CLA);

}
