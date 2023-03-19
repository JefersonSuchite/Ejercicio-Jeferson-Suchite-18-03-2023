//Jeferson  Alexis Suchite Chavez 0909-22-12681
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Por favor ingresa un numero: \n";
    cin >> num;

    if(num%2==0){//validar si es divisible en 2
        cout<<num<<" Es un numero par.\n";
    }else{
        cout<<num<<" No es un numero par.\n";
    }

    return 0;
}