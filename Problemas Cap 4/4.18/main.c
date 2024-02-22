#include <stdio.h>
#include <math.h>

/* Expresion.
El programa escribe los valores de T, P y Q que satisfacen una determinada expresion. */

int Expresion(int, int, int); /* Prototipo de función. */

void main(void)
{
    int EXP, T = 0, P = 0, Q = 0;
    EXP = Expresion(T, P, Q);
    while (EXP < 5500)
    {
    while (EXP < 5500)
    {
    while (EXP < 5500)
     {
        printf("\nT: %d, P: %d, Q: %d, Resultado: %d", T, P, Q, EXP);
        Q++;
        EXP = Expresion(T, P, Q);
     }
    P++;
    Q = 0;
    EXP = Expresion(T, P, Q);
    }
    T++;
    P = 0;
    Q = 0;
    EXP = Expresion(T, P, Q);
    }
}

int Expresion(int T, int P, int Q)
/* Esta funcion obtiene el resultado de la expresion para los valores de T, P y Q. */
{
    int RES;
    RES = 15 * pow(T, 4) + 12 * pow(P, 5) + 9 * pow(Q, 6);
    return RES;
}
