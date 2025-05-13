Apuntes C++ 23
==============

## Descripción
En este repositorio se encuentra apuntes para el estudio de C++ 23.
Si estás empezando en el mundo de la programación o estas aprendiendo este lenguaje 
puedes revisar este repositorio. 

Revisa este repositorio siguiendo la tabla de contenido por tema

## Breve descripción de C++ 
C++ es un lenguaje de programación creado en 1979, como una extensión de C, C++ nos permite tener un control más profundo de la ejecución de nuestro código ya sea temas de memoria, rendimiento o optimización.
Este lenguaje es  multiparadigma lo que significa que puedes programar en un estilo orientado a objetos, procedural y genérica tiene muchas herramientas para adaptar el estilo a tu problema.

C++ no usa Garbage Collector (GC) como Python, Javascript ya que C++ es un lenguaje de programación compilado.

## ¿Por qué aprender C++?
C++ se utiliza en muchas áreas como en desarrollo de video juegos, simuladores, motores gráficos, sistemas operativos, sistemas embebidos, programación competitiva, entre otros. 

## ¿Qué herramientas uso para C++?
- [Visual Studio Code](https://code.visualstudio.com/)
- [Mingw](https://www.mingw-w64.org/)
- [C/C++ for Visual Studio Code](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)

Si no quieres instalar nada simplemente ve a [C++ Shell](https://cpp.sh/) pero tan solo podrás hacer 
aplicaciones de consola si deseas hacer cosas avanzadas instala las herramientas localmente en tu computadora

Podemos verificar si Mingw se instalo en nuestra computadora ejecutando el siguiente comando en tu terminal linux o en el simbolo de sistema de Windows
```bash
mingw --version 
```

No te olvides buscar en la configuración de Visual Studio Code el Cpp Standard y luego cambia
de la opción Default a la opción c++23.

## ¿Cómo compilo un archivo .cpp con Mingw?
```bash
g++ -std=c++23 tu_codigo.cpp -o tu_programa
```
Reemplaza el nombre tu_codigo.cpp por el nombre del archivo que tengas, y en 
tu_programa.exe reemplaza por el nombre que quieres que tenga el archivo compilado

El -std=C++23 es con esto que especificamos la versión del lenguaje de C++

Luego ejecutamos el compilado con el ./
```bash
./tu_programa
```
# Tabla de contenido por tema

### 1. Fundamentos del lenguaje

### [01 Entrada y salida de datos](https://github.com/miguel835/C-plus-plus/tree/main/01%20Entrada%20y%20salida%20de%20datos)

### [02 Tipos de datos y variables](https://github.com/miguel835/C-plus-plus/tree/main/02%20Tipos%20de%20datos%20y%20variables)

### [03 Operadores lógicos, aritméticos y relaciones](https://github.com/miguel835/C-plus-plus/tree/main/03%20Operadores%20l%C3%B3gicos%2C%20aritm%C3%A9ticos%20y%20relaciones)

### [04 Comentarios y buenas prácticas](https://github.com/miguel835/C-plus-plus/tree/main/04%20Comentarios%20y%20buenas%20pr%C3%A1cticas)

### [Ejercicio NombreEdad](https://github.com/miguel835/C-plus-plus/tree/main/05%20NombreEdad)