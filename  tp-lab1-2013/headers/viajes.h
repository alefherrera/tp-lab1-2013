#ifndef VIAJES_H_INCLUDED
#define VIAJES_H_INCLUDED
void listarViajes(Viajes*, int*);
void MostrarViaje(Viajes*);
void agregarViaje(Viajes*, int*);
void menuViajes(Viajes *, int *);

void menuViajes(Viajes *v, int *c)
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
        agregarViaje(v,c);
        break;
    case 2:
        listarViajes(v,c);
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

void agregarViaje(Viajes *v, int *c)
{
    int codigoc, codigov;
    Fecha f;
    cout<<"INGRESE CODIGO CAMION"<<endl;
    cin>>codigoc;
    cout<<"INGRESE CODIGO VIAJE"<<endl;
    cin>>codigov;
    cout<<"INGRESE LA FECHA"<<endl;
    f = IngresarFecha();
    v[*c].fechav = f;
    v[*c].codigoc = codigoc;
    v[*c].codigov = codigov;
    *c+=1;
}

void listarViajes(Viajes *v, int *c)
{
    for(int i=0; i< *c; i++)
    {
        MostrarViaje(&v[i]);
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
