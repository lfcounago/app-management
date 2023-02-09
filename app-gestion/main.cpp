#include <iostream>
//Incluiremos la librería <locale.h> para poder imprimir texto en pantalla con acentos más adelante incluiremos "setlocale(LC_CTYPE, "Spanish")"//
#include <locale.h>
#include <string.h>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;


float actividades();
float registro();
float areaPersonal();
int menuprincipal();
void limpiarPantalla();
//Funcion main
int main()
{
    setlocale(LC_ALL, "");

    char opcion;
//Descripción del programa
    cout << "-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·--·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·--·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·--·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·--·-·-·-·" << endl;
    cout << "Bienvenidos al servicio oficial de la eco-granja. Desde aquí, podrás reservar las actividades que más te gusten y llevarlas a cabo con uno de nuestros monitores experimentado en el ámbito correspondiente" << endl;
    cout << "-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·--·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·--·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·--·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·-·--·-·-·-·" << endl;

    system("pause");
    limpiarPantalla();

    opcion = menuprincipal();
//Estructura para invocar las funciones de actividades, registro y area personal
    switch(opcion){
    case '1': actividades(),menuprincipal();
        break;
    case '2': registro(),menuprincipal();
        break;
    case '3': areaPersonal(),menuprincipal();
        break;
    case '4': cout << "Gracias por confiar en nosotros" << endl;
            system("pause");
        break;

    return 0;
    }
}//Fin funcion main
