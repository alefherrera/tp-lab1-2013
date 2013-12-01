#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

int validarCodigoc (Camiones*, int*, int);
int validarCodigov (Viajes*, int*, int);
void MostrarFecha(Fecha);
int validarCodigoc(Camiones *vCam, int *cCam, int codigo){

int i;

for (i=0;i<=*cCam;i++){

    if (codigo == vCam[i].codigoc){
        return i;
    }
}
return -1;
}

int validarCodigov(Viajes *v, int *c, int codigo){
    int i;
    for (i=0;i<=*c;i++){

    if (codigo == v[i].codigov){
        return i;
    }
}
return -1;
}

void MostrarFecha(Fecha f)
{
    cout<<f.dia<<"/"<<f.mes<<"/"<<f.anio<<endl;
}

Fecha IngresarFecha()
{
    Fecha f;
    cout<<"Dia:";
    cin>>f.dia;
    cout<<"Mes:";
    cin>>f.mes;
    cout<<"Anio";
    cin>>f.anio;
    return f;
}

#endif // FUNCIONES_H_INCLUDED
