#include <stdio.h>

/* Incrementa salarios.
El programa incrementa el salario de los empleados de una empresa actualiza el archivo correspondiente si sus ventas son superiores
al millon de pesos anuales. */

typedef struct/* Declaracion de la estructura empleado. */
   {
    int clave;
    int departamento;
    float salario;
    float ventas[12];
} empleado;

void incrementa(FILE *); /* Prototipo de funcion. */
void main(void)

{
    FILE *ar;
    if ((ar = fopen("ad5.dat", "r+")) != NULL)
/* El archivo se abre en la modalidad para leer y escribir. */
        incrementa(ar);
else
    printf("\nEl archivo no se puede abrir");
    rewind(ar);
/* La funcion rewind se utiliza para posicionarnos en el inicio del archivo cada vez que sea necesario. En este programa no tiene
ninguna utilidad, sólo se escribio para explicar su uso. */

    fclose(ar);
}
void incrementa(FILE *ap)/* Esta funcion se utiliza para incrementar el salario de todos aquellos empleados que hayan tenido ventas
anuales por más de $1,000,000. Actualiza ademas el archivo correspondiente. */
{
    int i, j;
    float sum;
    empleado emple;

    int t = sizeof(empleado);/* La funcion sizeof se utiliza para conocer el tamaño de la estructura empleado. */
    fread(&emple, sizeof(empleado), 1, ap); /* Se lee el primer registro del archivo. */
    while (!feof(ap))
    {
        i = ftell(ap) / t;/* La funcion ftell se utiliza para conocer la posición de nuestro apuntador en el archivo. La variable i
nos proporciona en este caso el tamaño de todos los bloques que existen debajo de nuestra posicion. Si conocemos el tamaño de cada
bloque, entonces podemos obtener el número de bloques que hay exactamente debajo de nuestra posición. */

    sum = 0;
     for (j = 0; j < 12; j++)
        sum += emple.ventas[j]; /* Se calculan las ventas de cada vendedor. */
          if (sum > 1000000)
            {
            emple.salario = emple.salario * 1.10; /* Se incrementa el salario. */
        fseek(ap, (i - 1) * sizeof(empleado), SEEK_SET);/* Nos posicionamos para escribir el registro actualizado. */
    fwrite(&emple, sizeof(empleado), 1, ap);
fseek(ap, i * sizeof(empleado), SEEK_SET);/* Nos posicionamos nuevamente para leer el siguiente registro. Esta instruccion no deberia
ser necesaria, pero la funcion fwrite se comporta a veces de manera inestable en algunos compiladores de C. Para asegurarnos que
siempre funcione correctamente, realizamos este nuevo reposicionamiento. */

        }
    fread(&emple, sizeof(empleado), 1, ap);
    }
}
