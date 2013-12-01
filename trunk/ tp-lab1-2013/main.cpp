#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

struct Fecha{
int dia;
int mes;
int anio;
};

struct Viajes{
int codigov;
Fecha fechav;
int codigoc;
};

struct Encomiendas {
int codigoe;
int codigov;
char cliente[50];
int servicio;
float peso;
float costo;
};

struct Camiones{
int codigoc;
char patente[7];
float maxima;
bool estado;
};

#include "headers/funciones.h"
#include "headers/camiones.h"
#include "headers/viajes.h"

int main()
{
Fecha fsistema;
int opc;
Camiones vCam[5];
Viajes vViajes[10];
Encomiendas vEncomiendas[20];
int cCam = 0, cViajes = 0, cEncomiendas = 0;

while ("true"){
    system("cls");
    cout << "------ MENU PRINCIPAL ------"<<endl;
    cout << "1 - CAMIONES "<<endl;
    cout << "2 - VIAJES"<<endl;
    cout << "3 - ENCOMIENDAS"<<endl;
    cout << "4 - REPORTES"<<endl;
    cout << "5 - CONFIGURACION"<<endl<<endl;
    cout << "----------------------------"<<endl<<endl;
    cout << "0 - SALIR DEL PROGRAMA"<<endl<<endl;
    cin >> opc;




    switch (opc){

case 1:
     menuCamiones(vCam, &cCam);
    break;

case 2:
    menuViajes(vViajes, &cViajes, vCam, cCam);
    break;
case 3:
    //menuEncomiendas(vEncomiendas, &cEncomiendas)
    break;

case 4:

    break;
case 5:

    break;
case 0:
return 0;
    break;
default:
cout << "OPCION INCORRECTA";
system ("pause<nul");
    break;

    }
}


}
