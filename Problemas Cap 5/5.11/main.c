#include <stdio.h>

/*Busqueda binaria. */

const int MAX = 100;

void Lectura(int *, int);  /* Prototipos de funciones. */
int Binaria(int *, int, int);

int main(void)
{
    int RES, ELE, TAM, VEC[MAX];
    do
    {
        printf("Ingrese el tama�o del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM > MAX || TAM < 1); /* Se verifica que el tama�o del arreglo sea correcto. */

    Lectura(VEC, TAM);
    printf("\nIngrese el elemento a buscar: ");
    scanf("%d", &ELE);
    RES = Binaria(VEC, TAM, ELE);  /* Se llama a la funcion que busca en el arreglo. */

    if (RES)/* Si RES tiene un valor verdadero �diferente de 0�, se escribe la posici�n en la que se encontro el elemento. */

        printf("\nEl elemento se encuentra en la posici�n: %d", RES);
    else
        printf("\nEl elemento no se encuentra en el arreglo");
    }


void Lectura(int A[], int T)/* La funcion Lectura se utiliza para leer un arreglo unidimensional de T elementos de tipo entero. */
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

int Binaria(int A[], int T, int E)/* Esta funcion se utiliza para realizar una b�squeda binaria del elemento EE en el arreglo unidimensional A
 de T elementos. Si se encuentra el elemento, la funci�n regresa la posici�n correspondiente. En caso contrario, regresa 0. */
{
    int IZQ = 0, DER = T - 1, CEN, BAN = 0;
    while (IZQ <= DER && !BAN)
    {
        CEN = (IZQ + DER) / 2;
        if (E == A[CEN])
            BAN = CEN + 1;
        else
            if (E > A[CEN])
               IZQ = CEN + 1;
            else

            DER = CEN - 1;

    }

    return BAN;
}
