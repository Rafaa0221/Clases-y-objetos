#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Empleado{
    private:
        int ClaveEmpleado;
        string Nombre;
        string Domicilio;
        float Sueldo;
        string ReportaA;
    public:
        Empleado (int,string,string,float,string);
        void imprime();
        void cambiaDomicilio(string);
        void cambiaReportaA(string);
        void ActualizaSueldo(float);
        void Menu();
};

Empleado::Empleado(int clave,string nombre,string domicilio,float sueldo,string reportaA){
    ClaveEmpleado = clave;
    Nombre = nombre;
    Domicilio = domicilio;
    Sueldo = sueldo;
    ReportaA = reportaA;
}

void Empleado::imprime(){
    cout<<"Clave: "<<ClaveEmpleado<<endl;
    cout<<"Domicilio: "<<Domicilio<<endl;
    cout<<"Sueldo: "<<Sueldo<<endl;
    cout<<"Reporta A: "<<ReportaA<<endl<<endl;
}

void Empleado::cambiaDomicilio(string _dom){
    Domicilio = _dom;
    cout<<"Domicilio actualizado..."<<endl;
}

void Empleado::ActualizaSueldo(float _sueldo){
    Sueldo = _sueldo;
    cout<<"Sueldo actualizado..."<<endl;
}

void Empleado::cambiaReportaA(string _reportaA){
    ReportaA = _reportaA;
    cout<<"Reporta A actualizado..."<<endl;
}

void Menu(){
    cout<<"MENU DE EMPLEADOS"<<endl;
    cout<<"1. Cambiar domicilio de empleado."<<endl;
    cout<<"2. Actualizar sueldo de empleado."<<endl;
    cout<<"3. Imprimir datos de empleado."<<endl;
    cout<<"4. Cambiar nombre de persona que reporta a empleado."<<endl;
    cout<<"5. Salir."<<endl;
    cout<<"Opcion: ";
}

int main()
{
    Empleado JefePlanta = Empleado(222222,"Rafael","Av. Romeros #34",20000,"Emanuel");
    Empleado JefePersonal = Empleado(444444,"Pepe","Av. Juan palomar #45",35000,"Paco");
    float sueldo=0;
    int Opcion,opc,clave=0;
    string domicilio,reportaa;

    do{
    system("cls");
    Menu();
    cin>>Opcion;
    switch(Opcion)
    {
        case 1:
            cout<<"Ingrese la clave de empleado: ";
            cin>>clave;
            cin.get();
            if(clave == 222222){
                cout<<"Nuevo domicilio del Jefe de Planta: ";
                getline(cin,domicilio);
                JefePlanta.cambiaDomicilio(domicilio);
            }
            else if(clave == 444444){
                cout<<"Nuevo domicilio del Jefe de Personal: ";
                getline(cin,domicilio);
                JefePersonal.cambiaDomicilio(domicilio);
            }
            else{
                cout<<"Clave ingresada no existe.";
            }
            system("pause");
            break;
        case 2:
            cout<<"Ingrese la clave de empleado: ";
            cin>>clave;
            if(clave == 222222){
                cout<<"Ingrese el nuevo sueldo de jefe de planta: ";
                cin>>sueldo;
                JefePlanta.ActualizaSueldo(sueldo);
            }
            else if(clave == 444444){
                cout<<"Ingrese el nuevo sueldo de jefe de personal: ";
                cin>>sueldo;
                JefePersonal.ActualizaSueldo(sueldo);
            }
            else{
                cout<<"Clave ingresada no existe.";
            }
            system("pause");
            break;
        case 3:
            cout<<"Ingrese la clave de empleado: ";
            cin>>clave;
            if(clave == 222222){
                cout<<"Jefe de Planta"<<endl;
                JefePlanta.imprime();
            }
            else if(clave == 444444){
                cout<<"Jefe de Personal"<<endl;
                JefePersonal.imprime();
            }
            else{
                cout<<"Clave ingresada no existe.";
            }
            system("pause");
            break;
        case 4:
            cout<<"Cambiar nombre de persona que reporta a empleado:"<<endl;
            cout<<"1. Jefe Planta."<<endl;
            cout<<"2. Jefe Personal."<<endl;
            cout<<"Opcion: ";
            cin>>opc;
            cin.get();
            if(opc==1){
                cout<<"Nuevo nombre de quien reporta a Jefe Planta: ";
                getline(cin,reportaa);
                JefePlanta.cambiaReportaA(reportaa);
            }
            else if(opc==2){
                cout<<"Nuevo nombre de quien reporta a Jefe Personal: ";
                getline(cin,reportaa);
                JefePersonal.cambiaReportaA(reportaa);
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
    while(Opcion!=5);
    return 0;
}
