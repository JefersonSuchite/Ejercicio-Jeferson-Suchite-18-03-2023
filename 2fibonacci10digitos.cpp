//Jeferson Alexis Suchite Chavez 0909-22-12681
#include <iostream>
using namespace std;

int main() {
    int num1=0, num2=1, num3=0, digitos=0; //declaro los primeros numeros de la secuencia de fibonacci
    cout << "La serie de Fibonacci hasta los primeros 10 digitos es: " << endl;
    cout << num1 << ", " << num2 << ", ";

    while (digitos < 10) {
        num3= num1+num2;  //num3 0+1
        cout << num3 << ", ";
        num1=num2; //num1 que era 0 ahora sera 1
        num2=num3;  //num2 que era 1 ahora sera 1   luego se repite la secuencia y num1 ahora valdra 1 y num2 valdra 2 y num3 sera 1+2
        digitos = 0;
        int contardig = num3;//declaro una nueva varieble que se llama contar digitos y le doy valor del numero 3
        while (contardig != 0) {//mientras contar digitos no sea igual a 0
            digitos++;
            contardig /= 10; //divido el resultado y lo almaceno
        }
    }

    return 0;
}