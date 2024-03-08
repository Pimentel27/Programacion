#include <stdio.h>
#define N 4

void calcularDiagonales(int matriz[N][N]) /* Establezco una funcion para el calculo de la matriz. */
{
    int sumaDiagonalPrincipal = 0; /* Declaro las variables. */
    int sumaDiagonalSecundaria = 0;

    printf("La diagonal principal de la matriz es: "); /*En esta se imprime la diagonal principal de la matriz. */
    for (int i = 0; i < N; i++) /* Aqui creamos un blucle for que va repiendose desde i = 0 a i < N, tambien imprimimos
        los elementos que conforman la diagonal principal de la matriz. */

        {
        printf("%d ", matriz[i][i]);
        sumaDiagonalPrincipal += matriz[i][i];
        }

    printf("\n");
    printf("Suma de la diagonal principal: %d\n", sumaDiagonalPrincipal);

    printf("La diagonal secundaria de la matriz es: "); /* Aca establecemos lo mismo de que estabelcimos para la diagonal principal,
    pero esta enfocada en la diablonal secundaria. */
    for (int i = 0; i < N; i++)

        {
        printf("%d ", matriz[i][N - 1 - i]);
        sumaDiagonalSecundaria += matriz[i][N - 1 - i];
        }

    printf("\n");
    printf("Suma de la diagonal secundaria: %d\n", sumaDiagonalSecundaria);
}

int main() /* Aca pues establecemos el tamaño de la matriz, asignandole valores. */
{
    int matriz[N][N] = {{1, 2, 3, 6},
                        {4, 5, 6, 7},
                        {6, 5, 8, 9},
                        {7, 8, 9, 4}};

    calcularDiagonales(matriz);
    return 0; /* Finalizamos el programa. */

}
