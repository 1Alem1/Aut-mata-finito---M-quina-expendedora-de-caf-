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
    char opcion;

    cargarIngredientes(&ingrediente);

    do
    {
        opcion = menu();

        switch(opcion)
        {
        case 'A':
            if(haystock(ingrediente,opcion))
            {
                if(confirmar(opcion))
                {

                }
            }
            break;
        case 'B':
            if(haystock(ingrediente,opcion))
            {

            }
            break;
        case 'C':
            if(haystock(ingrediente,opcion))
            {

            }
            break;
        case 'D':
            if(haystock(ingrediente,opcion))
            {

            }
            break;
        case 'E':
            if(haystock(ingrediente,opcion))
            {

            }
            break;
        case 'F':
            if(haystock(ingrediente,opcion))
            {

            }
            break;
        }

        estadoIngredientes = verificarIngredientes(&ingrediente);

        system("pause");
    }
    while(estadoIngredientes != 1);
}
