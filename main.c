#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "registros.h"
#include "funciones.h"

void main()
{
    ing ingrediente;
    int estadoIngredientes=1;
    inicializarmaquina(&ingrediente);
    char opcion;

    do
    {
        printf("\nESTADO ACTUAL:\n");
        printf("Agua: %d\n", ingrediente.agua);
        printf("Cafe: %d\n", ingrediente.cafe);
        printf("Leche: %d\n", ingrediente.leche);
        printf("Cacao: %d\n", ingrediente.cacao);

        opcion = menu(&ingrediente);

        if(opcion == '*')
        {
            continue;
        }

        estadoIngredientes = verificarIngredientes(ingrediente);

        if(estadoIngredientes == 0)
        {
            printf("No hay suficientes ingredientes para hacer ningun cafe.\n");
            continue;
        }

        switch(opcion)
        {
        case 'A':
            if(haystock(ingrediente,opcion))
            {
                if(confirmar(opcion))
                {
                    ingresarDinero(opcion);
                    actualizarIngredientes(&ingrediente, opcion);
                }
                else
                    break;
            }
            else
            {
                printf("No hay suficientes ingredientes para este cafe.\n");
            }
            break;
        case 'B':
            if(haystock(ingrediente,opcion))
            {
                if(confirmar(opcion))
                {
                    ingresarDinero(opcion);
                    actualizarIngredientes(&ingrediente, opcion);
                }
                else
                    break;
            }
            else
            {
                printf("No hay suficientes ingredientes para este cafe.\n");
            }
            break;
        case 'C':
            if(haystock(ingrediente,opcion))
            {
                if(confirmar(opcion))
                {
                    ingresarDinero(opcion);
                    actualizarIngredientes(&ingrediente, opcion);
                }
                else
                    break;
            }
            else
            {
                printf("No hay suficientes ingredientes para este cafe.\n");
            }
            break;
        case 'D':
            if(haystock(ingrediente,opcion))
            {
                if(confirmar(opcion))
                {
                    ingresarDinero(opcion);
                    actualizarIngredientes(&ingrediente, opcion);
                }
                else
                    break;
            }
            else
            {
                printf("No hay suficientes ingredientes para este cafe.\n");
            }
            break;
        case 'E':
            if(haystock(ingrediente,opcion))
            {
                if(confirmar(opcion))
                {
                    ingresarDinero(opcion);
                    actualizarIngredientes(&ingrediente, opcion);
                }
                else
                    break;
            }
            else
            {
                printf("No hay suficientes ingredientes para este cafe.\n");
            }
            break;
        case 'F':
            if(haystock(ingrediente,opcion))
            {
                if(confirmar(opcion))
                {
                    ingresarDinero(opcion);
                    actualizarIngredientes(&ingrediente, opcion);
                }
                else
                    break;
            }
            else
            {
                printf("No hay suficientes ingredientes para este cafe.\n");
            }
            break;
        }

    } while(1);

    printf("La maquina entra en modo reposo por falta de stock");
}
