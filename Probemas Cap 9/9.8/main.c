#include <stdio.h>

/* Alumnos.
El programa almacena variables de tipo estructura alumno en un archivo. */

typedef struct /* Declaracion de la estructura alumno. */
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;
void escribe(FILE *); /* Prototipo de funcion. */
void main(void)
{
    FILE *ar;
    if ((ar = fopen("ad1.dat", "wb")) != NULL)
        escribe(ar);
    else
        printf("\nEl archivo no se puede abrir");
    fclose(ar);
}
void escribe(FILE *ap)/* Esta funcion sirve para leer los datos de los alumnos utilizando una estructura tipo alumno, que se
 almacenara posteriormente en un archivo. */
{
    alumno alu;
    int i = 0, r;
    printf("\n¿Desea ingresar informacion sobre alumnos? (Si-1 No-0): ");
    scanf("%d", &r);
    while (r)
    {
        i++;
        printf("Matricula del alumno %d: ", i);
        scanf("%d", &alu.matricula);
        printf("Nombre del alumno %d: ", i);
        fflush(stdin);
        scanf("%19s", alu.nombre);
        printf("Carrera del alumno %d: ", i);
        scanf("%d", &alu.carrera);
        printf("Promedio del alumno %d: ", i);
        scanf("%f", &alu.promedio);
        fwrite(&alu, sizeof(alumno), 1, ap);
        printf("\n¿Desea ingresar informacion sobre mas alumnos? (Si-1 No-0): ");
        scanf("%d", &r);

        fwrite(&alu, sizeof(alumno), 1, ap); /*Observa que la funcion fwrite tiene cuarto argumento. El primero se utliza para
        indicar la variable tipo estructura que se desea almacenar; el segundo muestra el tamaño de esa variable en terminos
        de bytes; el tercero señala el numero de variable que se leeran o almacenaran en el deposito de almacenamiento secundaria,
        y el ultimo representa el apuntador al inicio de la estructura FILE. */

    }
}
