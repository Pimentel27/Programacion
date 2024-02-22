#include <stdio.h>

/* Funcion y parametros. */

int F1(int, int *); /* Prototipo de función. */

int A = 3;
int B = 7;
int C = 4; /* Variables globales. */
int D = 2;

void main(void)
{
    A = F1(C, &D);
    printf("%d %d %d %d\n", A, B, C, D);
    C = 3;
    C = F1(A, &C);
    printf("%d %d %d %d\n", A, B, C, D);
}

int F1(int X, int *Y)
{
    int A;
    A = X * *Y;
    C++;
    B += *Y;
    printf("%d %d %d %d\n", A, B, C, D);
    *Y--;
    return (C);
}
