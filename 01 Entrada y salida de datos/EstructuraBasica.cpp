/* Esta es la estructura básica que cumple cualquier programa de C++ por más complejos que sean */

#include<iostream> //Libreria para entrada y salida estandar 
//El iostream es una librería estándar de entrada y salida en C++, una librería es 
//básicamente un conjunto de funciones y herramientas ya escritas para que las podamos 
//reutilizar y no tener que programar todo desde cero.

using namespace std; //Para no tener que escribir std:: en ciertas funciones 
int main() //Función principal, punto de entrada del programa
{
    /*
    Todo lo que este dentro de main es lo que se va a ejecutar es decir nuestro programa.
    Cuando compilamos el compilador solo va a llamar a la función main y es lo que va a 
    ejecutar cada una de las líneas que estén dentro
     */
    string nombre;
    cout << "Hola, Mundo!" << endl;//Imprime mensaje en pantalla
    return 0;//Indica que el programa terminó correctamente 
}

/*Cuando compilamos el compilador solo va a llamar a la función main 
y es lo que va a ejecutar cada una de las líneas que estén dentro*/