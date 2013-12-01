#ifndef CAMIONES_H_INCLUDED
#define CAMIONES_H_INCLUDED

void cargarCamion (Camiones*, int*);
bool validarCodigo (Camiones*, int*, int);

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
    }

    break;

case 2:

    break;

case 3:

    break;
case 0:
return;
    break;
default:
    cout << "Opcion incorrecta";
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

    if (validarCodigo (vCam, cCam, cfalso) == false){

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
    cCam++;

}

bool validarCodigo(Camiones *vCam, int *cCam, int codigo){

int i;

for (i=0;i<=*cCam;i++){

    if (codigo == vCam[i].codigoc){
        return false;
    }
}
return true;
}

#endif // CAMIONES_H_INCLUDED
