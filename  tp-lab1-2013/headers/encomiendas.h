#ifndef ENCOMIENDAS_H_INCLUDED
#define ENCOMIENDAS_H_INCLUDED

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

#endif // ENCOMIENDAS_H_INCLUDED
