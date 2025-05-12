/*Operadores aritméticos:
+ Suma
- Resta
* Multiplicación
/ División
% Módulo

Operadores relacionales:
== Igual a 
!= Diferente de
> Mayor que
< Menor que
>= Mayor o igual que
<= Menor o igual que

Operadores lógicos:
&& AND
|| OR
! NOT*/

#include<iostream>
using namespace std;

int main()
{
    int a = 10, b = 5;
    cout << a + b << endl; //Suma: 15
    cout << (a > b) << endl; // ¿a es mayor que b?: 1 (true)
    //Recuerda que el true se representa como un 1 y el false se representa como un 0
    cout << (a > 5 && b < 10) << endl; //Ambas condiciones verdaderas: 1 (true)
}