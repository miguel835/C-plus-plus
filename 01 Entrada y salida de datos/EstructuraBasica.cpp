/* Esta es la estructura básica que cumple cualquier programa de C++ por más complejos que sean */

#include<iostream> //Libreria para entrada y salida estandar 
using namespace std; //Para no tener que escribir std:: en ciertas funciones 
int main() //Función principal, punto de entrada del programa
{
    string nombre;
    cout << "Hola, Mundo!" << endl;//Imprime mensaje en pantalla
    return 0;//Indica que el programa terminó correctamente 
}

/*Cuando compilamos el compilador solo va a llamar a la función main 
y es lo que va a ejecutar cada una de las líneas que estén dentro*/