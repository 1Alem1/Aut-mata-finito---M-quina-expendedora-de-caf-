char menu()
{
    char a;

    do
    {
        system("pause");
        printf("\nINGRESE OPCION\n"
               "\nA-Cafe cortado\n"
               "\nB-Cafe con leche"
               "\nC-Capuchino\n"
               "\nD-Mocca\n"
               "\nE-Latte\n"
               "\nF-Americano\n");
        fflush(stdin);
        scanf("%d", &a);
    }
    while(a < 'A' || a > 'F');
    return a;
}

int menuCarga()
{
    int a;

    do
    {
        printf("¿Que desea cargar?"
               "\n1-Agua\n"
               "\n2-Cafe\n"
               "\n3-Cacao\n"
               "\n4-Leche\n"
               "\n0-Cerrar carga\n");
        fflush(stdin);
        scanf("%d", &a);
    }
    while(a < 0 || a > 4);

    return a;
}

void cargarIngredientes(ing *ingrediente)
{
    ing aux;
    int opcion, cantidadAgua, cantidadCafe, cantidadCacao, cantidadLeche;

    do
    {
        opcion = menuCarga();

        switch(opcion)
        {
        case 1:
            printf("Ingrese cantidad de agua a cargar\n");
            fflush(stdin);
            scanf("%d", &cantidadAgua);
            aux.agua += cantidadAgua;
            break;
        case 2:
            printf("Ingrese cantidad de cafe a cargar\n");
            fflush(stdin);
            scanf("%d", &cantidadCafe);
            aux.cafe += cantidadCafe;
            break;
        case 3:
            printf("Ingrese cantidad de cacao a cargar\n");
            fflush(stdin);
            scanf("%d", &cantidadCacao);
            aux.cacao += cantidadCacao;
            break;
        case 4:
            printf("Ingrese cantidad de leche a cargar\n");
            fflush(stdin);
            scanf("%d", &cantidadLeche);
            aux.leche += cantidadLeche;
            break;
        case 0:
            printf("Cerrando maquina...\n");
            break;
        }
    }
    while(opcion < 0 || opcion > 4);
    aux = *ingrediente;
}


