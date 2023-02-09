#include <iostream>
#include <string.h>
#include <fstream>
#include "mylibrary.h"
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

//Función inicial para seleccionar destino
int menuprincipal(){

  char opcion;
  void limpiarPantalla();

do{
    cout << "--------------" << endl;
    cout << "Menu principal" << endl;
    cout << "--------------" << endl;
    cout << "Introduzca la opción que desee" << endl;
    cout << "1 para acceder a las actividades" << endl;
    cout << "2 para acceder al registro y darte de alta" << endl;
    cout << "3 para acceder a tu área personal" << endl;
    cout << "4 para finalizar" << endl;
    cin >> opcion;
    limpiarPantalla();
  }while (opcion<'1'||opcion>'4');

  return opcion;

}//Fin función menuprincipal

//Función para limpiar la pantalla
void limpiarPantalla(){
    system("cls");
}//Fin función limpiar pantalla

//Función de las actividades
float actividades(){

    setlocale(LC_ALL, "");

    char opcionActividades;
    char opcionReservaActividades;
    void lectura_actividades();
    float registro();
    int menuprincipal();
    void limpiarPantalla();
    int menuActividades();

    cout << "-----------------------------------" << endl;
    cout << "Ha accedido al apartado actividades" << endl;
    cout << "-----------------------------------" << endl;
    //Estructura repetitiva para seleccionar la opción deseada en las actividades
    do{
    cout << "Introduzca la opción que desee" << endl;
    cout << "1 para ver la descripción de las actividades" << endl;
    cout << "2 para reservar las actividades" << endl;
    cout << "3 para finalizar" << endl;
    cin >> opcionActividades;
    }while (opcionActividades<'1'||opcionActividades>'4');
    //Estructura para ver la descripción de las actividades, reservar actividades y volver al menú principal
    switch(opcionActividades){
        case '1':
            cout << "------------------------------" <<endl;
            cout << "Descripción de las actividades" <<endl;
            cout << "------------------------------" <<endl;
            lectura_actividades();
            system("pause");
            menuprincipal();

        break;

        case '2':
            cout << "----------------------" << endl;
            cout << "Reserva de actividades" << endl;
            cout << "----------------------" << endl;
            cout << "¿Qué actividad quiere reservar?" << endl;

            //Código para reservar una actividad

            int menuActividades();
            void altas();

            opcionReservaActividades=menuActividades();

            switch(opcionReservaActividades){
                case '1':
                    cout << "--------------" << endl;
                    cout << "Ruta a caballo" << endl;
                    cout << "--------------" << endl;
                    cout << "Esta actividad se realiza el primer sábado del mes y cuesta 18 euros por personas" << endl;

                    altas();

                break;

                case '2':
                    cout << "------------------" << endl;
                    cout << "Cocina tradicional" << endl;
                    cout << "------------------" << endl;
                    cout << "Esta actividad se realiza el segundo sábado del mes y cuesta 18 euros por personas" << endl;

                    altas();

                break;

                case '3':
                    cout << "----------" << endl;
                    cout << "Senderismo" << endl;
                    cout << "----------" << endl;
                    cout << "Esta actividad se realiza el tercer sábado del mes y cuesta 8 euros por persona" << endl;

                    altas();

                break;

                case '4':
                    cout << "-------------------" << endl;
                    cout << "Cuidado de animales" << endl;
                    cout << "-------------------" << endl;
                    cout << "Esta actividad se realiza el cuarto sábado del mes y cuesta 8 euros por persona" << endl;

                    altas();

                break;

                case '5':
                    menuprincipal();
                break;

            }
        break;

        case '3':
            menuprincipal();
        break;

        return 0;

    return 0;
    }
return 0;
}//Fin función actividades

//Función para escoger la opción deseada para las actividades
int menuActividades(){
    char opcionReservaActividades;
    void limpiarPantalla();

    do{
        cout << "Introduzca la opción que desee" << endl;
        cout << "1 para reservar una ruta a caballo" << endl;
        cout << "2 para reservar una clase de cocina tradicional" << endl;
        cout << "3 para reservar una ruta de senderismo" << endl;
        cout << "4 para reservar una clase de cuidar animales" << endl;
        cout << "5 para salir" << endl;
        cin >> opcionReservaActividades;
    }while (opcionReservaActividades<'1'||opcionReservaActividades>'6');
    limpiarPantalla();

    return opcionReservaActividades;
}//Fin función menuActividades

//Función para leer la descripción de las actividades
void lectura_actividades(){
    void limpiarPantalla();
	ifstream archivo_actividades;
	string texto;

	archivo_actividades.open("archivo_actividades.txt",ios::in); //Abrimos el archivo en modo lectura

	if(archivo_actividades.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}

	while(!archivo_actividades.eof()){ //mientras no sea final del archivo
		getline(archivo_actividades,texto);
		cout<<texto<<endl;
	}

	archivo_actividades.close(); //Cerramos el archivo

}//Fin función lecura_actividades

//Función que de registro para dar altas, bajas y buscar y modificar una reserva
float registro(){

    setlocale(LC_ALL, "");

    fstream archivo("archivo_registro.txt");
    string nombre, apellido, actividad_reservada, actividad_a_reservar;
    int menuprincipal();
    void limpiarPantalla();
    void altas();
    void bajas();
    void buscar();
    void consultas();
    void modificaciones();
    void menuRegistro();

    cout << "--------------------------------" << endl;
    cout << "Ha accedido al apartado registro" << endl;
    cout << "--------------------------------" << endl;

    menuRegistro();

    return 0;
	}//Fin función registro

//Función para escoger la opción deseada para el registro
void menuRegistro(){

    char opcion=0;
    void limpiarPantalla();

    do{
        cout<<"<-REGISTRO->"<<endl;
        cout<<"1. Altas"<<endl;
        cout<<"2. Bajas"<<endl;
        cout<<"3. Buscar un Registro"<<endl;
        cout<<"4. Modificaciones"<<endl;
        cout<<"5. Consultas"<<endl;
        cout<<"6. Salir"<<endl;
        cout<<"Que deseas hacer? ";
        cin>>opcion;
        switch(opcion){
            case '1':
                altas();
            break;
           case '2':
                bajas();
            break;
            case '3':
                buscar();
            break;
            case '4':
                modificaciones();
            break;
            case '5':
                consultas();
            case '6':
                menuprincipal();
            break;

            default:
                cout<<"¡Opcion Incorrecta!"<<endl;
        }
    }while(opcion!='6');
}//Fin funcion menuRegistro

//Función para dar de alta un registro
void altas(){

    void limpiarPantalla();
    string nombre, actividadReservada;
    int edad, mes, clave, op;
    ofstream archivo;
    archivo.open("archivo_registro.txt",ios::out|ios::app);
    if(archivo.is_open()){//Abrimos el archivo
        cout << "Archivo abierto correctamente" << endl;

            cout << "Introduce una Clave: " << endl;
            cin >> clave;
            cin.ignore();
            cout << "Introduce tu Nombre: " << endl;
            getline(cin,nombre);
            cout << "Introduce el nombre de la Actividad a reservar: " << endl;
            getline(cin, actividadReservada);
            cout << "Introduce tu Edad: " << endl;
            cin >> edad;
            cout << "Introduce el Mes en el que quieres reservar la actividad (en número): " << endl;
            cin >> mes;

            cout << "1.-Guardar registro\n2.- Regresar\n";
            cin >> op;

            if(op==1){
                archivo<<" "<<clave<<" "<<nombre<<" "<<actividadReservada<<" "<<edad<<" "<<mes<<endl;//Guardamos el registro

                limpiarPantalla();

                cout << "Registro guardado con exito...\n";
                system("pause");
                limpiarPantalla();
            }

    }else{//Se inicializa cuando no se puede abrir el archivo
        cout << "Error, el archivo no se pudo abrir" << endl;
    }
    archivo.close();
    system("pause");
    menuRegistro();
}//Fin funcion altas

//Función del area personal. Donde se puede buscar tu reserva
float areaPersonal(){

    setlocale(LC_ALL, "");

    int menuprincipal();
    void lectura_registro();
    void limpiarPantalla();
    void buscar();


    cout << "-------------------------------------" << endl;
    cout << "Ha accedido al apartado área personal" << endl;
    cout << "-------------------------------------" << endl;


    buscar();

    system("pause");
    limpiarPantalla();
    menuprincipal();
    return 0;
}//Fin función arePersonal

//Función para buscar un registro en concreto con su clave
void buscar(){

    string nombre, actividadReservada;
    int clave, edad, mes, auxClave;
    void limpiarPantalla();
    bool encontrado=false;

    ifstream archivo("archivo_registro.txt");
    archivo.open("archivo_registro.txt",ios::out|ios::in);

    if(archivo.is_open()){//Abrimos el archivo
        cout << "Ingresa la clave del registro que quieres buscar" << endl;
        cin >> auxClave;
        archivo>>clave;
        encontrado=false;
        while(!archivo.eof()){
            archivo>>clave>>nombre>>actividadReservada>>edad>>mes; //Leemo los campos del registro
            //Comparar cada registro y ver si se encuentra
            if(auxClave==clave){//Si encuentra la clave muestra su registro
                cout<<"______________________________"<<endl;
                cout << "Clave: " << clave << endl;
                cout << "Nombre: " << nombre << endl;
                cout << "Actividad reservada: " << actividadReservada << endl;
                cout << "Edad: " << edad << endl;
                cout << "Mes: " << mes << endl;
                cout << "____________________________" << endl;
                encontrado=true;
            }
            archivo>>clave;
        }
        if(encontrado==false){//Se inicializa cuando no hay registros con esa clave
            cout << "No hay registros con esa clave" << endl;
        }
    }else{//Se inicializa cuando no se puede abrir el archivo
        cout << "No se pudo abrir el archivo" << endl;
    }

    archivo.close();
    menuRegistro();
}//Fin función buscar

void consultas(){
    string nombre, actividadReservada;
    int clave, edad, mes;
    void limpiarPantalla();

    ifstream archivo("archivo_registro.txt");
    archivo.open("archivo_registro.txt",ios::out|ios::in);


    if(archivo.is_open()){//Abrimos el archivo
        cout << "Registros del archivo archivo_registro.txt" << endl;
        cout << "__________________________________________" << endl;
        archivo >> clave;
        while(!archivo.eof()){//Recorre el archivo mostrando todos los registros
            archivo>>clave;
            archivo>>nombre;
            archivo>>actividadReservada;
            archivo>>edad;
            archivo>>mes;
            cout << "Clave: " << clave << endl;
            cout << "Nombre: " << nombre << endl;
            cout << "Actividad reservada: " << actividadReservada << endl;
            cout << "Edad: " << edad << endl;
            cout << "Mes: " << mes << endl;
            archivo>>clave;
            cout << "__________________________________________" << endl;
        }
    }else{//Se inicializa cuando no se puede abrir el archivo
        cout << "Error, no se pudo abrir el archivo" << endl;
    }
    archivo.close();
}//Fin función consultas

//Función para modificar un registro
void modificaciones(){

    ifstream archivo("archivo_registro.txt");
    string nombre, actividadReservada;
    int edad, mes, clave, auxClave=0;
    void limpiarPantalla();
    ofstream aux("auxiliar.txt");
    string auxNombre, auxactividadReservada;
    int auxMes=0, auxEdad=0;
    bool encontrado = false;

    aux.open("auxiliar.txt",ios::out);//Abrimos el archivo
    archivo.open("archivo_registro.txt",ios::in);//Abrimos el archivo
    if(aux.is_open() && archivo.is_open()){
        cout << "Ingresa la clave del alumno que deseas modificar: ";
        cin >> auxClave;
        archivo>>clave;
        cin.ignore();
        while(!archivo.eof()){//Mientras no se llegue al final del archivo, seguir recorriéndolo
            cin.ignore();
            archivo>>nombre>>actividadReservada>>edad>>mes;
            if(auxClave==clave){
                encontrado=true;//Si se encuentra mostrar sus valores actuales
                cout << "___________________________" << endl;
                cout << "Clave: " << clave << endl;
                cout << "Nombre: " << nombre << endl;
                cout << "Actividad Reservada: " << actividadReservada << endl;
                cout << "Edad: " << edad << endl;
                cout << "Mes: " << mes << endl;
                cout << "___________________________" << endl;
                //Pedimos los nuevos valores para las variables
                cout<<"Ingresa el Nuevo Nombre de la Clave "<<clave<<": ";
                cin >> auxNombre;
                cout<<"Ingresa el Nuevo Mes de la Clave "<<clave<<": ";
                cin>>auxMes;
                cout<<"Ingresa la Nueva Actividad de la Clave "<<clave<<": ";
                cin>>auxactividadReservada;
                cin.ignore();
                cout<<"Ingresa la Nueva Edad de la Clave "<<clave<<": ";
                cin>>auxEdad;
                aux << clave << " " << auxNombre << " " << auxactividadReservada << " " << auxEdad << " " << auxMes;//Guardamos los nuevos valores
                cout << "Registro modificado..." << endl;
            }else{//Si no se abre el archivo dejar todo como estaba
                aux << clave << " " << nombre << " " << actividadReservada << " " << edad << " " << mes;
            }
            archivo>>clave;
        }
    }else{//Se inicializa cuando no se puede abrir el archivo
        cout << "Error, no se pudo abrir el archivo" << endl;
    }
    if(encontrado==false){//Se inicializa cuando no hay registros con esa clave
        cout << "No se encontró un registro con esa clave" << endl;
    }
    aux.close();//Cerramos el archivo
    archivo.close();//Cerramos el archivo
    remove("archivo_registro.txt");//Borramos el archivo inicial
    rename("auxiliar.txt","archivo_registro.txt");//Cambiamos el archivo nuevo por el inicial
    menuRegistro();

}//Fin función modificaciones

//Función para borrar un registro
void bajas(){

    ifstream archivo("archivo_registro.txt");
    string nombre, actividadReservada;
    int edad, mes, clave, auxClave=0;
    void limpiarPantalla();
    ofstream aux("auxiliar.txt");
    bool encontrado = false;

    aux.open("auxiliar.txt",ios::out);//Abrimos el archivo
    archivo.open("archivo_registro.txt",ios::in);//Abrimos el archivo
    if(aux.is_open() && archivo.is_open()){
        cout << "Ingresa la clave del alumno que deseas eliminar: ";
        cin >> auxClave;
        archivo>>clave;
        while(!archivo.eof()){//Recorremos el archivo
            archivo>>nombre>>actividadReservada>>edad>>mes;
            if(auxClave==clave){//Buscamos la clave
                encontrado=true;//Borramos ese registro
                cout << "Registro eliminado" << endl;
            }else{//Si no se encuentra la clave en el archivo dejar todo como estaba
                aux << clave << " " << nombre << " " << actividadReservada << " " << edad << " " << mes;
            }
            archivo>>clave;
        }
    }else{//Se inicializa cuando no se puede abrir el archivo
        cout << "Error, no se pudo abrir el archivo" << endl;
    }
    if(encontrado==false){//Se inicializa cuando no hay registros con esa clave
        cout << "No se encontró un registro con esa clave" << endl;
    }

}//Fin función bajas

