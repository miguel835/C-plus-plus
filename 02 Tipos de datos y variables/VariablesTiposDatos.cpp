#include<iostream>
#include<string> //Agregamos esta librería para poder trabajar con string
using namespace std; //Para ahorrarnos escribir std::

//En C++ podemos declarar variables y constantes
/*Las variables son posiciones en memoria donde estarán guardados 
los diferentes valores que le damos o que toman durante la ejecución,  los datos 
que usamos normalmente estarán disponibles a lo largo de la ejecución de nuestro programa. 
Mientras que las constantes son valores que no cambian en el tiempo de ejecución, 
tenemos dos formas de crear constantes: const y #define*/

#define velocidadSonido 343 //Definimos una constante llamada velocidadSonido
//NUNCA SE PONE EL PUNTO Y COMA EN UN #define ya que 
//#define es una directiva del preprocesador que simplemente 
//realiza un reemplazo de texto antes de la compilación.
/*SI se pone ; entonces el preprocesador reemplazaba velocidadSonido por 343;*/

int main(){
    const float PI = 3.1416; //Definimos una constante llamada PI

    /*A los tipos de datos lo podemos clasificar en:
    - Tipos numéricos enteros
    - Tipos numéricos decimales
    - Carácter y cadena
    - Booleano*/

    //Tipos numéricos enteros
    int edad = 19;                  //Entero con signo 
    unsigned int puntos = 1500;     //Entero sin signo (solo valores positivos)
    short dias = 7;                 //Entero corto 
    long poblacion = 8000000;       //Entero largo 
    
    //Tipo númericos decimales 
    float temperatura = 36.6f;      //Decimal con menor precisión 
    double altura = 1.75;           //Decimal con mayor precisión 
    long double pi = 3.1415926535;  //Decimal de alta precisión 

    //Carácter y cadena 
    char inicial = 'M';             //Un solo caracter 
    string nombre = "María";        //Cadena de texto (requiere # include <string>)

    //Booleano
    bool estudiante = true;         //Booleano solo acepta true o false 

    //Imprimimos los valores por pantalla
    cout <<"Nombre: " << nombre << endl;
    cout <<"Inicial: " << inicial << endl;
    cout <<"Edad: " << edad << endl;
    cout <<"Altura: " << altura << endl;
    cout <<"Temperatura corporal: " << temperatura << "C" << endl;
    cout <<"Puntos acumulados: " << puntos << endl;
    cout <<"Estudiante: " << estudiante << endl;
    cout <<"Población: " << poblacion << endl;
    cout <<"Días de la semana: " << dias << endl;
    cout <<"Valor de pi: " << pi << endl;
    cout <<"Velocidad del sonido: " << velocidadSonido << endl;
    return 0;
}

