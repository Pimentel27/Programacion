#include <stdio.h>

/* Primos.
El programa almacena en un arreglo unidimensional los primeros 100 n�meros primos. */

#define TAM  100

void Imprime(int *, int); /* Prototipos de funciones. */
void Primo(int, int *);

int main(void)
{
    int P[TAM] = {1,2}; // Se inicia con el primer primo, que es 2.
    int FLA, J = 1, PRI = 3; // Iniciar J en 1 ya que P[0] ya est� ocupado con 2.
    while (J < TAM)
    {
        FLA = 1;
        Primo(PRI, &FLA); // Se llama a la funci�n que determina si PRI es primo.
        if (FLA)  // Si FLA es 1, entonces PRI es primo.
        {
            P[J] = PRI;
            J++;
        }
        PRI += 2; // Solo comprobamos n�meros impares mayores que 2 para ser primos.
    }
    Imprime(P, TAM);
    return 0; // Se agrega retorno para indicar que el programa termin� correctamente.
}

/* Esta funci�n determina si A es primo, en cuyo caso el valor de *B no se altera. */
void Primo(int A, int *B)
{
    int DI = 2;
    while (*B && (DI * DI <= A)) // Se ajusta la condici�n para terminar el bucle.
    {
        if ((A % DI) == 0)
            *B = 0;
        DI++;
    }
}

/* Esta funci�n imprime el arreglo unidimensional de n�meros primos. */
void Imprime(int Primos[], int T)
{
    int I;
    for (I = 0; I < T; I++)
        printf("\nPrimos[%d]: %d", I, Primos[I]);
}
