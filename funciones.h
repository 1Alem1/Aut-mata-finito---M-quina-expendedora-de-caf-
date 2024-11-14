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
            printf("Desea confirmar el pedido de cafe cortado?\n Importe: $1000\n1.Si\n2.No\n");
            fflush(stdin);
            scanf("%d",&conf);
            break;
        case 'B':
            printf("Desea confirmar el pedido de cafe con leche?\n Importe: $1200 \n 1.Si\n2.No\n");
            fflush(stdin);
            scanf("%d",&conf);
            break;
        case 'C':
            printf("Desea confirmar el pedido de cafe capuchino?\n Importe: $2000 \n1.Si\n.No\n");
            fflush(stdin);
            scanf("%d",&conf);
            break;
        case 'D':
            printf("Desea confirmar el pedido de cafe mocca?\n Importe: $2000\n1.Si\n2.No\n");
            fflush(stdin);
            scanf("%d",&conf);
            break;
        case 'E':
            printf("Desea confirmar el pedido de cafe latte?\n Importe: $1500\n1.Si\n2.No\n");
            fflush(stdin);
            scanf("%d",&conf);
            break;
        case 'F':
            printf("Desea confirmar el pedido de cafe americano?\n Importe: $1200\n1.Si\n2.No\n");
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

int ingresarDinero(char op)
{
    int dinero = 0, totalIngresado = 0, precio;
    const int precios[] = {1000, 1200, 2000, 2000, 1500, 1200}; // A, B, C, D, E, F
    const char *productos[] =
    {
        "cafe cortado", "cafe con leche", "cafe capuchino",
        "cafe mocca", "cafe latte", "cafe americano"
    };

    if (op >= 'A' && op <= 'F')
    {
        int indice = op - 'A';
        precio = precios[indice];

        printf("Pedido: %s\nImporte: $%d\n", productos[indice], precio);

        while (totalIngresado < precio)
        {
            printf("Ingrese dinero:\n");
            fflush(stdin);
            scanf("%d", &dinero);


            if (dinero != 100 && dinero != 200 && dinero != 500 && dinero != 1000 && dinero !=2000)
            {
                printf("Billete no aceptado. Intente con 100, 200, 500, 1000 o 2000.\n");
                continue;
            }

            totalIngresado += dinero;

            if (totalIngresado < precio)
            {
                printf("Dinero insuficiente. Faltan $%d.\n", precio - totalIngresado);
            }
        }
        if (totalIngresado > precio)
        {
            printf("Gracias! Su cambio es $%d.\n", totalIngresado - precio);
        }
        else
        {
            printf("Gracias por su compra!\n");
        }
    }
    else
    {
        printf("Opcion invalida.\n");
    }

    return totalIngresado;
}

void actualizarIngredientes(ing *I, char  op)
{
    switch(op)
    {
    case 'A':
        (*I).agua -=1;
        (*I).cafe -=1;
        (*I).leche -=1;
        break;
    case 'B':
        (*I).agua -=1;
        (*I).cafe -=1;
        (*I).leche -=2;
        break;
    case 'C':
        (*I).agua -=1;
        (*I).cafe -=2;
        (*I).leche -=2;
        (*I).cacao -=1;
        break;
    case 'D':
        (*I).agua -=1;
        (*I).cafe -=1;
        (*I).leche -=2;
        (*I).cacao -=2;
        break;
    case 'E':
        (*I).agua -=1;
        (*I).cafe -=2;
        (*I).leche -=2;
        break;
    case 'F':
        (*I).agua -=2;
        (*I).cafe -=1;
        break;
    }
}



