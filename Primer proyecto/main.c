#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad = 0;

    while (1)
        {

    printf("\nEscribe tu edad:");
    scanf("%d",&edad);

    if(edad > 0 && edad < 130)
    {
        if(edad < 18)
        {
            printf("\nEres Menor de Edad!\n");
        }
        else
        {
            printf("\nEres Mayor de Edad!\n");
        }
    }
    else
    {
        printf("\nJABLADOR!!!\n");
    }
}
    return 0;
}
