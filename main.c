#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "registros.h"
#include "funciones.h"

void main()
{

    ing ingrediente;
    int estadoIngredientes;
    inicializarmaquina(&ingrediente);
    char opcion;



    do
    {
        opcion = menu(ingrediente);

        estadoIngredientes = verificarIngredientes(ingrediente);
        if(estadoIngredientes!=0)
        {
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
                break;
            case '*':
                cargarIngredientes(&ingrediente);
            }
        }





    }
    while(estadoIngredientes == 1);
    printf("La maquina entra en modo reposo por falta de stock");
}
