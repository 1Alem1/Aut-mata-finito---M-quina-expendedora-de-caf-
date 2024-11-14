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
        printf("A");
        break;
    }

    estadoIngredientes = verificarIngredientes(&ingrediente);

    system("pause");
}
while(estadoIngredientes != 1);
}
