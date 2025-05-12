//Esto es un comentario de una sola línea
/*
Esto es un comentario
que puede ocupar varias líneas
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
// -------------Ejemplo 1------------
string n;cin>>n;cout<<"Hola "<<n; //Esta es una mala practica 
//Ya que el usuario no sabe que debe ingresar y normalmente el usuario no va a ver el 
//código para entender

//-------------Ejemplo 2------------
//Esta es una buena practica
string nombre; //Variable para guardar el nombre del usuario

//Pedimos el nombre del usuario
cout << "¿Cómo te llamas?"; //cout significa character out -> salida de caracteres 
cin >> nombre;//cin significa character in -> entrada de caracteres 

//Mostramos un saludo
cout << "Hola, "<<nombre << "! Bienvenido al programa." << endl;
return 0;
}