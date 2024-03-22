#include <stdio.h>
#include <string.h>

/* Estructura-3.
El programa muestra la manera en que se declara una estructura anidada, asi como la forma de acceso a los campos de las variables
o apuntadores de tipo estructura, tanto para la lectura como para escritura. Se utiliza ademas una funcion que recibe como parametro
un apuntador de tipo estructura. */

typedef struct /* Declaracion de la estructura domicilio utilizando un typedef. */

{
    char calle[20];
    int numero;
    int cp;
    char localidad[20];
}   domicilio;

struct empleado /* Declaracion de la esctructura anidada empleado. */
{
    char nombre[20];
    char departamento[20];
    float sueldo;
    domicilio direccion; /*direccion es un campo de tipo estructura, domicilio de la estructura empleado. */


};

void Lectura(struct empleado *a)/* Funcion que permite leer los campos de un apuntador de tipo estructura empleado. */

{
    printf("Ingrese el nombre del empleado: ");
    scanf("%s", a->nombre);

    printf("Ingrese el departamento de la empresa: ");
    scanf("%s", a->departamento);

    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &a->sueldo);

    printf("---Ingrese la direccion del empleado---: ");
    printf("\n\tCalle: ");
    scanf("%s", a->direccion.calle);

    printf("\tNumero: ");
    scanf("%d", &a->direccion.numero);

    printf("\tCodigo Postal: ");
    scanf("%d", &a->direccion.cp);

    printf("\tLocalidad: ");
    scanf("%s", a->direccion.localidad);
}

int main()
{
    struct empleado e0 = {"Arturo", "Compras", 15500.75,"San Jeronimo", 120, 3490, "Toluca"};

    struct empleado *e1, *e2, e3, e4; /* Se declaran diferentes varibales y apuntadores de la estructura empleado para que
    el lector pueda apreciar tambien las diferentes formas en que los campos reciben valores. */

    /*En el programa principal se leen los campos de una variable, a3 y un apuntador de tipo estructura, *e2*1. */


      e1 = (struct empleado*)malloc(sizeof(struct empleado));
      printf("\nIngrese el nombre del empleado 1: ");
      scanf("%s", e1->nombre);

      printf("Ingrese el departamento de la empresa: ");
      scanf("%s", e1->departamento);

      printf("Ingrese el sueldo del empleado: ");
      scanf("%f", &e1->sueldo);

      printf("---Ingrese la direccion del empleado---");
      printf("\n\tCalle: ");
      scanf("%s", e1->direccion.calle);

      printf("\tNumero: ");
      scanf("%d", &e1->direccion.numero);

      printf("\tCodigo Postal: ");
      scanf("%d", &e1->direccion.cp);

      printf("\tLocalidad: ");
      scanf("%s", e1->direccion.localidad);

      printf("\nIngrese el nombre del empleado 3: ");
      scanf("%s", e3.nombre);

      printf("Ingrese el departamento de la empresa: ");
      scanf("%s", e3.departamento);

      printf("Ingrese el sueldo del empleado: ");
      scanf("%f", &e3.sueldo);

      printf("---Ingrese la direccion del empleado---");
      printf("\n\tCalle: ");
      scanf("%s", e3.direccion.calle);

      printf("\tNumero: ");
      scanf("%d", &e3.direccion.numero);

      printf("\tCodigo Postal: ");
      scanf("%d", &e3.direccion.cp);

      printf("\tLocalidad: ");
      scanf("%s", e3.direccion.localidad);

/* En la funcion Lectura se leen los campos de una variable, e4, y un apuntador de tipo estructura, *e2. */

      e2 = (struct empleado*)malloc(sizeof(struct empleado));

      Lectura(e2);
      Lectura(&e4);

     printf("\nDatos del empleado 1\n");
     printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s\n", e1->nombre, e1->departamento, e1->sueldo,
           e1->direccion.calle, e1->direccion.numero, e1->direccion.cp, e1->direccion.localidad);

     printf("\nDatos del empleado 4\n");
     printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s\n", e4.nombre, e4.departamento, e4.sueldo,
     e4.direccion.calle, e4.direccion.numero, e4.direccion.cp, e4.direccion.localidad);

}
