#ifndef VIAJES_H_INCLUDED
#define VIAJES_H_INCLUDED
void listarViajes(Viajes*, int*);
void MostrarViaje(Viajes*);
void agregarViaje(Viajes*, int*, Camiones*, int);
void menuViajes(Viajes *, int *, Camiones*, int);

void menuViajes(Viajes *vViajes, int *cViajes, Camiones *vCamiones, int cCam)
{
    int opc;
    while (1){
    system("cls");
    cout << "------ MENU VIAJES ------"<<endl;
    cout << "1 - AGREGAR VIAJE "<<endl;
    cout << "2 - LISTAR TODOS LOS VIAJES"<<endl;
    cout << "----------------------------"<<endl<<endl;
    cout << "0 - VOLVER AL MENU PRINCIPAL"<<endl<<endl;
    cin >> opc;
    switch (opc){

    case 1:
        agregarViaje(vViajes,cViajes,vCamiones,cCam);
        break;
    case 2:
        listarViajes(vViajes,cViajes);
        break;
    case 0:
        return;
        break;
    default:
        cout << "OPCION INCORRECTA";
        system("pause>nul");
        break;
    }
    }
}

void agregarViaje(Viajes *vViajes, int *cViajes, Camiones *vCamiones, int cCam)
{
    int codigoc, codigov;
    Fecha f;

    cout<<"INGRESE CODIGO CAMION"<<endl;
    cin>>codigoc;
    if (validarCodigoc(vCamiones,cCam,codigoc) == -1)
    {
        cout<<"EL CAMION NO EXISTE";
        system("pause>nul");
        return;
    }
    cout<<"INGRESE CODIGO VIAJE"<<endl;
    cin>>codigov;
    if (validarCodigov(vViajes,*cViajes,codigov) != -1)
    {
        cout<<"EL CODIGO DE VIAJE YA EXISTE";
        system("pause>nul");
        return;
    }
    cout<<"INGRESE LA FECHA"<<endl;
    f = IngresarFecha();
    vViajes[*cViajes].fechav = f;
    vViajes[*cViajes].codigoc = codigoc;
    vViajes[*cViajes].codigov = codigov;
    *cViajes+=1;
}

void listarViajes(Viajes *vViajes, int *c)
{
    for(int i=0; i< *c; i++)
    {
        MostrarViaje(&vViajes[i]);
    }
    system("pause>nul");
}

void MostrarViaje(Viajes *v)
{
    cout<<"CODIGO DE VIAJE: "<<v->codigov<<endl;
    cout<<"FECHA: ";
    MostrarFecha(v->fechav);
    cout<<"CODIGO DE CAMION: "<<v->codigoc<<endl<<endl;
}

#endif // VIAJES_H_INCLUDED
