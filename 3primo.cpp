//Jeferson Alexis Suchite Chavez 0909-22-12681
#include <iostream>
using namespace std;

int main() {
    int num;
    bool primo = true;

    cout << "Ingrese un numero entero positivo: \n";
    cin >> num;

    if (num <= 1) {
        primo = false;
    }
    else {
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                primo = false;
                break;
            }
        }
    }

    if (primo) {
        cout << num << " es un numero primo." << endl;
    }
    else {
        cout << num << " no es un numero primo." << endl;
    }




    return 0;
}
