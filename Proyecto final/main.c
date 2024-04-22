#include <stdio.h>
#include <string.h>


/* Programa para calcular el costo de de viaje de un vehiculo */


typedef struct /* Aca creo la estructura del programa. */
{
    char vehiculo[100];
    float costo_vehiculo;
    double promedio_uso_meses;
    double consumo;
    double costo;
    double kmgalon;
    double viaje;
    double costo_mantenimiento;
    double costo_seguro_anual;
    double depreciacion;

} Cliente;

/*Establezco esta funcion para imprimir informacion del vehiculo en un formato específico */

void imprimirCliente(Cliente cliente)
{
    /* Esto aca lo que hace es imprimir los datos del cliente en forma de tabla */

    printf("| %-25s | %-15.2f | %-20.2lf | %-15.2lf | %-15.2lf | %-15.2lf | %-15.2lf | %-20.2lf|%-20.2lf | %-15.2lf |\n",
    cliente.vehiculo, cliente.costo_vehiculo, cliente.promedio_uso_meses, cliente.consumo,cliente.costo, cliente.kmgalon,
    cliente.viaje, cliente.costo_mantenimiento, cliente.costo_seguro_anual, cliente.depreciacion);

}

int main()/* Esta es la funcion principal del programa */

{
    /*Aca ya se inicializa la estructura del vehiculo */
    Cliente cliente = {"", 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    char opcion; /* Establece esta variable para guardarlas opciones del menu */
    int anos; /* Esta variable la establece para guardar la cantidad de años del calculo */


    do /* Establezco el do para la creacion de menu del programa */

    {

        printf("\n--- Menu ---\n\n");
        printf("1. Modificar datos del vehiculo\n");
        printf("2. Ver detalles del vehiculo\n");
        printf("3. Imprimir estructura\n");
        printf("4. Calcular costo de viaje\n");
        printf("5. Salir\n\n");
        printf("Seleccione una opcion: ");
        scanf(" %c", &opcion);

        switch(opcion)

        /* Establezco el switch para poder administrar las opciones del menu del programa */

        {

        case '1': /* Aca pues puedo modificar los datos del vehiculo */

            printf("\nIngrese los datos del vehiculo:\n\n");

            printf("Modelo del vehiculo: ");
            scanf("%s", cliente.vehiculo);

            printf("Cual es el costo del vehiculo: ");
            scanf("%f", &cliente.costo_vehiculo);

            printf("Cual es el promedio de uso del vehiculo en meses: ");
            scanf("%lf", &cliente.promedio_uso_meses);

            printf("Cual el consumo de combustible por kilometro en litros: ");
            scanf("%lf", &cliente.consumo);

            printf("Cual es el costo del combustible por litro: ");
            scanf("%lf", &cliente.costo);

            cliente.kmgalon = 1 / (cliente.consumo / 3.78541);

            printf("Cual distancia del viaje en en kilometros: ");
            scanf("%lf", &cliente.viaje);

            printf("Cual es el costo de mantenimiento del vehiculo anual: ");
            scanf("%lf", &cliente.costo_mantenimiento);

            printf("Cual es el costo del seguro del vehiculo anual: ");
            scanf("%lf", &cliente.costo_seguro_anual);

            printf("Cual es la depreciacion del vehiculo anual: ");
            scanf("%lf", &cliente.depreciacion);

            printf("Ingrese la cantidad de anos a calcular: ");
            scanf("%d", &anos);

    /* Aqui se multiplican los valores por la cantidad de años establecidos  */

            cliente.costo_vehiculo *= anos;
            cliente.promedio_uso_meses *= anos;
            cliente.consumo *= anos;
            cliente.costo *= anos;
            cliente.viaje *= anos;
            cliente.costo_mantenimiento *= anos;
            cliente.costo_seguro_anual *= anos;
            cliente.depreciacion *= anos;

            printf("\nDatos del vehiculo modificados con exito.\n");

            /* Esto aqui le pregunta al usuaria si desea guardar los datos ingresados en un archivo de texto
            .txt  */

            printf("\n¿Desea guardar los datos del vehiculo en un archivo de texto? (1/0): ");
            char respuesta;
            scanf(" %c", &respuesta);

            if (respuesta == '1' || respuesta == '0')
            {
                char nombre_archivo[100];

                printf("Ingrese el nombre del archivo incluya la extension .txt: ");
                scanf("%s", nombre_archivo);

                FILE *archivo = fopen(nombre_archivo, "w");
                if (archivo == NULL)
                {
                    printf("No se pudo crear el archivo.\n");
                }

            else

            {
        fprintf(archivo, "Detalles del vehiculo:\n");
        fprintf(archivo, "| %-25s | %-15s | %-20s | %-15s | %-15s | %-15s | %-15s | %-20s | %-20s | %-15s |\n", "Vehiculo",
        "Costo Vehiculo", "Promedio Uso Meses", "Consumo (L/Km)", "Costo Combustible", "Consumo (Km/Galon)", "Viaje (Km)",
        "Costo Mantenimiento", "Costo Seguro Anual", "Depreciacion");

            fprintf(archivo, "| %-25s | %-15.2f | %-20.2lf | %-15.2lf | %-15.2lf | %-15.2lf | %-15.2lf | %-20.2lf | %-20.2lf| %-15.2lf |\n",
            cliente.vehiculo, cliente.costo_vehiculo, cliente.promedio_uso_meses, cliente.consumo, cliente.costo,
            cliente.kmgalon, cliente.viaje,cliente.costo_mantenimiento, cliente.costo_seguro_anual, cliente.depreciacion);

            fclose(archivo);
            printf("Los datos del vehiculo se han guardado correctamente en el archivo '%s'.\n", nombre_archivo);

            }
        }

            break;

        case '2': /* Aca pues puedo ver los detalles ingresado del vehiculo */

            printf("\nDetalles del vehiculo:\n");

            printf("| %-25s | %-15s | %-20s | %-15s | %-15s | %-15s | %-15s | %-20s | %-20s | %-15s |\n",

                "Vehiculo", "Costo Vehiculo", "Promedio Uso Meses", "Consumo (L/Km)", "Costo Combustible", "Consumo (Km/Galon)",
                "Viaje (Km)", "Costo Mantenimiento", "Costo Seguro Anual", "Depreciacion");

                /*Esto aqui midifica la esctructura con los valores modificado antes de imprimir */

            cliente.costo /= anos;
            cliente.viaje /= anos;

            imprimirCliente(cliente);

            /* Aqui se restauran los valores originales para la esctructura  */

            cliente.costo *= anos;
            cliente.viaje *= anos;

            break;

        case '3': /* Aca imprimo la estructura */

            printf("\nEstructura actual:\n");
            printf("| %-25s | %-15s | %-20s | %-15s | %-15s | %-15s | %-15s | %-20s | %-20s | %-15s |\n", "Vehiculo",
                "Costo Vehiculo", "Promedio Uso Meses", "Consumo (L/Km)", "Costo Combustible", "Consumo (Km/Galon)", "Viaje (Km)",
                "Costo Mantenimiento", "Costo Seguro Anual", "Depreciacion");


            cliente.costo_vehiculo /= anos;
            cliente.promedio_uso_meses /= anos;
            cliente.consumo /= anos;
            cliente.costo /= anos;
            cliente.viaje /= anos;
            cliente.costo_mantenimiento /= anos;
            cliente.costo_seguro_anual /= anos;
            cliente.depreciacion /= anos;

            imprimirCliente(cliente);


            cliente.costo_vehiculo *= anos;
            cliente.promedio_uso_meses *= anos;
            cliente.consumo *= anos;
            cliente.costo *= anos;
            cliente.viaje *= anos;
            cliente.costo_mantenimiento *= anos;
            cliente.costo_seguro_anual *= anos;
            cliente.depreciacion *= anos;

            break;

        case '4':  /* Aca con este case se calcula el costo del viaje  */


            printf("\nCalculando costo del viaje:\n");
            double costo_viaje = cliente.costo * cliente.viaje;
            printf("El costo del viaje es: %.2lf\n", costo_viaje);

            break;

        case '5': /* En este case pues salgo del programa */

            printf("Saliendo del programa.\n");

            break;

        default:

            printf("Opcion no valida. Por favor, seleccione una opcion valida.\n");
        }

    } while (opcion != '5');

    return 0;

}
