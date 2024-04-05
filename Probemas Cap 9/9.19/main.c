#include <stdio.h>

/* Ordena de menor a mayor.
El programa ordena de menor a mayor en funcion de la matricula, creando un nuevo archivo, un archivo de acceso directo compuesto por
estructuras y ordenado de mayor a menor. */


typedef struct /* Declaracion de la esctructura alumno. */
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void ordena(FILE *, FILE *); /*Prototipo de funcion. */
int main(void)
{
    FILE *ar1, *ar2;
    ar1 = fopen("ad5.dat", "r");
    ar2 = fopen("ad6.dat", "w");
    if (ar1 != NULL && ar2 != NULL)
    {
        ordena(ar1, ar2);
        fclose(ar1);
        fclose(ar2);
    }
    return 0;
}

void ordena(FILE *ap1, FILE *ap2)/* Esta funcion ordena de menor a mayor un archivo compuesto por estructura, en funcion de su
matricula, y genera un nuevo archivo. */
{
    alumno alu;
    int t, n, i;
    t = sizeof(alumno);
    fseek(ap1, 0, SEEK_END);
    n = ftell(ap1) / t;/*Se obtiene el nuemro de registro que componen el archivo. El valor de n, a su vez, se utilizara para
    posicionarlo en el archivo. */

    rewind(ap1);
    for (i = n - 1; i >= 0; i--)/*Se utliza en el ciclo descendente. */
    {
        fseek(ap1, i * sizeof(alumno), SEEK_SET);
        fread(&alu, sizeof(alumno), 1, ap1);
        fwrite(&alu, sizeof(alumno), 1, ap2);
    }
}




