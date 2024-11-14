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
        scanf("%c", &a);
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

int haystock(ing I,char op)
{
    switch(op)
    {
    case 'A':
        if(I.agua>=1&&I.cafe>=1&&I.leche>=1)
        {
            return 1;
        }
        else
            return 0;
        break;
    case 'B':
        if(I.agua>=1&&I.cafe>=1&&I.leche>=2)
        {
            return 1;
        }
        else
            return 0;
        break;
    case 'C':
        if(I.agua>=1&&I.cafe>=2&&I.leche>=2&&I.cacao>=1)
        {
            return 1;
        }
        else
            return 0;
        break;
    case 'D':
        if(I.agua>=1&&I.cafe>=1&&I.leche>=2&&I.cacao>=2)
        {
            return 1;
        }
        else
            return 0;
        break;
    case 'E':
        if(I.agua>1&&I.cafe>2&&I.leche>2)
        {
            return 1;
        }
        else
            return 0;
        break;
    case 'F':
        if(I.agua>2&&I.cafe>1)
        {
            return 1;
        }
        else
            return 0;
        break;
    }
}

int confirmar(char op)
{
    int conf;

    do
    {
        switch(op)
        {
        case 'A':
            printf("Desea confirmar el pedido de cafe cortado?/n 1.Si/n2.No/n");
            fflush(stdin);
            scanf("%d",&conf);
            break;
        case 'B':
            printf("Desea confirmar el pedido de cafe con leche?/n 1.Si/n2.No/n");
            fflush(stdin);
            scanf("%d",&conf);
            break;
        case 'C':
            printf("Desea confirmar el pedido de cafe Capuchino?/n 1.Si/n2.No/n");
            fflush(stdin);
            scanf("%d",&conf);
            break;
        case 'D':
            printf("Desea confirmar el pedido de cafe Mocca?/n 1.Si/n2.No/n");
            fflush(stdin);
            scanf("%d",&conf);
            break;
        case 'E':
            printf("Desea confirmar el pedido de cafe Latte?/n 1.Si/n2.No/n");
            fflush(stdin);
            scanf("%d",&conf);
            break;
        case 'F':
            printf("Desea confirmar el pedido de cafe Americano?/n 1.Si/n2.No/n");
            fflush(stdin);
            scanf("%d",&conf);
            break;
        }
    }
    while(conf<1||conf>2);


    if(conf==1)
            return 1;
        else
            return 0;
}

int verificarIngredientes(ing *I)
{
    int estado;

    if(I->agua==0)
    {
        if(I->cafe==0)
        {
            if(I->cacao==0)
            {
                if(I->leche==0)
                {
                    estado=0;
                }
            }
        }
    }

}


