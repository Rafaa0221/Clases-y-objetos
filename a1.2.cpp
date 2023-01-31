#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Materia{
    private:
        int Clave;
        string Nombre;
        string ProfesorTit;
        string LibroTexto;
    public:
        Materia(int,string,string,string);
        void imprime();
        void CambiaClave(int);
        void cambiaProfe(string);
        void Menu();
};

Materia::Materia(int clave,string nombre,string profesor,string librotexto){
    Clave = clave;
    Nombre = nombre;
    ProfesorTit = profesor;
    LibroTexto = librotexto;
}

void Materia::imprime(){
    cout<<"Clave: "<<Clave<<endl;
    cout<<"Nombre: "<<Nombre<<endl;
    cout<<"Profesor que la imparte: "<<ProfesorTit<<endl;
    cout<<"Libro de texto: "<<LibroTexto<<endl<<endl;
}

void Materia::CambiaClave(int _clave){
    Clave = _clave;
    cout<<"Clave actualizado..."<<endl;
}

void Materia::cambiaProfe(string _profesor){
    ProfesorTit = _profesor;
    cout<<"Profesor actualizado..."<<endl;
}

void Menu(){
    cout<<"MENU DE MATERIAS"<<endl;
    cout<<"1. Cambiar clave de materia."<<endl;
    cout<<"2. Cambiar nombre de maestro que imparte materia."<<endl;
    cout<<"3. Imprimir datos de materia."<<endl;
    cout<<"4. Salir."<<endl;
    cout<<"Opcion: ";
}

int main()
{
    Materia Programacion = Materia(1234,"Programacion","Manuel Perez","Conceptos de Programacion");
    Materia BasesDatos = Materia(5678,"Bases de datos","Luisa Pineda","Bases de Datos l");
    int Opcion,opc,clave=0,_clave;
    string profesor;

    do{
    system("cls");
    Menu();
    cin>>Opcion;
    switch(Opcion)
    {
        case 1:
            cout<<"Ingrese la clave de materia: ";
            cin>>clave;
            if(clave == 1234){
                cout<<"Nueva clave de la materia de Programacion: ";
                cin>>_clave;
                Programacion.CambiaClave(_clave);
            }
            else if(clave == 5678){
                cout<<"Nueva clave de la materia de Bases de Datos: ";
                cin>>_clave;
                BasesDatos.CambiaClave(_clave);
            }
            else{
                cout<<"Clave ingresada no existe.";
            }
            system("pause");
            break;
        case 2:
            cout<<"Cambiar nombre de maestro que imparte materia"<<endl;
            cout<<"1. Programacion."<<endl;
            cout<<"2. Bases de datos."<<endl;
            cout<<"Opcion: ";
            cin>>opc;
            cin.get();
            if(opc==1){
                cout<<"Nuevo maestro para Programacion: ";
                getline(cin,profesor);
                Programacion.cambiaProfe(profesor);
            }
            else if(opc==2){
                cout<<"Nuevo maestro para Bases de Datos: ";
                getline(cin,profesor);
                BasesDatos.cambiaProfe(profesor);
            }
            else{
                cout<<"Opcion no valida.";
            }
            system("pause");
            break;
        case 3:
            cout<<"Imprimir datos de materia"<<endl;
            cout<<"1. Programacion."<<endl;
            cout<<"2. Bases de datos."<<endl;
            cout<<"Opcion: ";
            cin>>opc;
            cin.get();
            if(opc==1){
                Programacion.imprime();
            }
            else if(opc==2){
                BasesDatos.imprime();
            }
            else{
                cout<<"Opcion no valida.";
            }
            system("pause");
            break;
            default:
                cout<<"Opcion invalida.";
    }
    }
    while(Opcion!=4);
    return 0;
}
