#ifndef CAMIONES_H_INCLUDED
#define CAMIONES_H_INCLUDED

void cargarCamion (Camiones*, int*);
void reparacionCamiones (Camiones*, int*);
void listarCamionesEstado (Camiones*, int*, int );
void imprimirCamion (Camiones*, int );

void menuCamiones(Camiones *vCam, int *cCam) {
int opc;
while ("true"){
    system("cls");
    cout << "------ MENU CAMIONES ------"<<endl;
    cout << "1 - AGREGAR CAMION "<<endl;
    cout << "2 - ENVIAR AL TALLER / RECUPERAR CAMION DEL TALLER"<<endl;
    cout << "3 - LISTAR TODOS LOS CAMIONES"<<endl<<endl;
    cout << "----------------------------"<<endl<<endl;
    cout << "0 - SALIR DEL PROGRAMA"<<endl<<endl;
    cin >> opc;




    switch (opc){

case 1:

    if (*cCam < 5){

        cargarCamion(vCam, cCam);
    } else {
    cout << "NO SE PUEDEN AGREGAR MAS CAMIONES";
    }
    return;

    break;

case 2:

    reparacionCamiones(vCam, cCam);

    break;

case 3:
    listarCamionesEstado(vCam, cCam, 3);

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

 void cargarCamion (Camiones *vCam, int *cCam){

int cfalso;
bool kilos = false;
float pesofalso;
char pfalso[7];
system ("cls");
cout << "INGRESE CODIGO DE CAMION: ";
cin >> cfalso;

    if (validarCodigoc (vCam, *cCam, cfalso) != -1){
        cout << "CODIGO YA INGRESADO.";
        system ("pause>nul");
        return;
    }else{
            cout << "INGRESE PATENTE: ";
            cin.ignore();
            cin.getline (pfalso, 7);
        while (kilos == false){

            cout << "INGRESE CARGA MAXIMA (EN KILOS): ";
            cin >> pesofalso;

            if (pesofalso > 0 ){
            kilos = true;
            } else{
            cout << "VALOR INCORRECTO. RE";
            }


        }

    }

    vCam[*cCam].codigoc = cfalso;
    strcpy (vCam[*cCam].patente, pfalso);
    vCam[*cCam].maxima = pesofalso;
    vCam[*cCam].estado = true;
    *cCam += 1;
    return;

}



void reparacionCamiones (Camiones *vCam, int *cCam) {
int opc, pos, cfalso;
    while (true) {
    system("cls");
    cout << "1 - RECUPERAR CAMION DEL TALLER"<<endl;
    cout << "2 - ENVIAR CAMION AL TALLER"<<endl<<endl;
    cin >> opc;

    }
switch (opc){
    case 1:
        system ("cls");

        cout << "INGRESE CODIGO DE CAMION";
        cin >> cfalso;
        if (validarCodigoc(vCam, cCam, cfalso) < -1){
            cout << "EL CAMION NO EXISTE";
            return;
        }else{
        pos  = validarCodigoc(vCam, cCam, cfalso);
        if (vCam[pos].estado == true){

            cout << "EL CAMION NO SE ENCUENTRA EN EL TALLER";
            return;
        }else{
        vCam[pos].estado = true;
        cout << "EL CAMION FUE RECUPERADO DEL TALLER";
        return;
                }

        }
break;

    case 2:
        system ("cls");

        cout << "INGRESE CODIGO DE CAMION";
        cin>> cfalso;
        if (validarCodigoc(vCam, cCam, cfalso) < -1){
            cout << "EL CAMION NO EXISTE";
            return;
        }else{
        pos  = validarCodigoc(vCam, cCam, cfalso);
        if (vCam[pos].estado == false){

            cout << "EL CAMION YA SE ENCUENTRA EN EL TALLER";
            return;
        }else{
        vCam[pos].estado = false;
        cout << "EL CAMION FUE ENVIADO AL TALLER";
        return;
                }
        }
        break;

    case 0:
        return;
        break;
    default:
        cout << "OPCION INCORRECTA";
        system ("pause<nul");
        return;
}
}

void listarCamionesEstado (Camiones *vCam, int *cCam, int id){
    int i;
    for (i=0; i<*cCam;i++){

        switch (id){

        case 1:
            if (vCam[i].estado == true){
                imprimirCamion(vCam,i);
            }
            break;
        case 2:
            if (vCam[i].estado == false){
                imprimirCamion(vCam,i);
            }
            break;
        case 3:
                imprimirCamion(vCam,i);

            break;

        }

    }

    system("pause>nul");

}

void imprimirCamion (Camiones *vCam, int i){
cout << "CODIGO DE CAMION" << vCam[i].codigoc<<endl;
cout << "NRO DE PATENTE" << vCam[i].patente<<endl;
cout << "PESO MAXIMO" << vCam[i].maxima<<endl;

if  (vCam[i].estado==true){
    cout << "ESTADO: DISPONIBLE"<<endl;

}else{
    cout << "ESTADO: EN TALLER"<<endl;
}

}




#endif // CAMIONES_H_INCLUDED
