//Jeferson Alexis Suchite Chavez 0909-22-12681
#include "iostream"
using namespace std;

int main(){

    float num, i=1;
    float factorial=1;
    cout << "Por favor ingrese un numero\n";
    cin >> num;
    cout << "\n";

    while(i<=num){
        factorial=factorial*i;
        cout<<i<<"! = "<<factorial<<endl;
        i++;

    }
    cout<< "El factorial de "  << num << " es :"<<factorial << "\n";

    return 0;
}
