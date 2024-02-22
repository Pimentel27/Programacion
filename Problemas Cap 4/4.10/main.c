#include <stdio.h>

/* Múltiplo.
El programa, al recibir como datos dos números enteros, determina si el segundo es múltiplo del primero. */

int multiplo(int, int); /* Prototipo de función. */

int main(void)
{
    int NU1, NU2, RES;

    printf("Ingresa los dos numeros: ");

    scanf("%d %d", &NU1, &NU2);

    RES = multiplo(NU1, NU2);

    if (RES)
        printf("El segundo numero es multiplo del primero\n");
    else
        printf("El segundo numero no es multiplo del primero\n");

}

int multiplo(int N1, int N2)
/* Esta funcion determina si N2 es múltiplo de N1. */
{
    int RES;

    if ((N2 % N1) == 0)
        RES = 1;
    else
        RES = 0;

    return RES;
}
