/* Las entradas por teclado se hacen con cin y las salidas por pantalla se hacen con cout */
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string nombre;
    cout << "Ingresa tu nombre: ";
    cin >> nombre;
    cout << "Hola " << nombre << endl;
}