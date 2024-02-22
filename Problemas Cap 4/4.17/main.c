#include <stdio.h>

/* <Lluvias.
El programa permite calcular el promedio mensual de las lluvias caidas en tres regiones importantes del pais.
Determina tambien cual es la region con mayor promedio de lluvia anual. */


void Mayor(float, float, float);  /* Prototipo de funcion. */

void main(void)
{
    int I;
    float GOL, PAC, CAR, AGOL = 0, APAC = 0, ACAR = 0;
    for (I = 1; I <= 12; I++)
    {
        printf("\n\nIngresa las lluvias del mes %d\n", I);
        printf("Regiones Golfo, Pacífico y Caribe: ");
        scanf("%f %f %f", &GOL, &PAC, &CAR);
        AGOL += GOL;
        APAC += PAC;
        ACAR += CAR;
    }

    printf("\n\nPromedio de lluvias Región Golfo: %6.2f", (AGOL / 12));
    printf("\nPromedio de lluvias Región Pacífico: %6.2f", (APAC / 12));
    printf("\nPromedio de lluvias Región Caribe: %6.2f\n", (ACAR / 12));
    Mayor(AGOL, APAC, ACAR);

    /* Se llama a la funcion Mayor. Paso de parametro por valor. */

}

void Mayor(float R1, float R2, float R3)
/* Esta funcion obtiene la region con mayor promedio de lluvia anual. */
{
    if (R1 > R2)
    if (R1 > R3)
    printf("\nRegion con mayor promedio: Region Golfo. Promedio: %6.2f", R1 / 12);

    else
         printf("\nRegion con mayor promedio: Region Caribe. Promedio: %6.2f", R3 / 12);

    else
        printf("\nRegion con mayor promedio: Región Pacifico. Promedio: %6.2f", R2 / 12);


}
