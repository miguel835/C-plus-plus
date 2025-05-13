//Realice un algoritmo que permita guardar en variables el nombre y la edad del usuario
//Posteriormente mostrar los datos por pantalla 
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string nombre;
    int edad;
    cout << "Ingresa tu nombre: ";
    cin >> nombre;
    
    cout << "Ingresa tu edad: ";
    cin >> edad;

    cout << "Hola, " << nombre << ". Tienes " << edad << " años." << endl;
    return 0;
}