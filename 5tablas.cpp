#include <iostream>
using namespace std;

int main() {
    int  num, tbl=0, multiplicacion;
    cout << "Por favor ingrese un numero\n";
    cin >> num;
    cout << "\n";
    cout<< "La tabla de " << num << "\n";

    while(num>0 and tbl<11){
        multiplicacion=num*tbl;
        cout<< num << " x " << tbl <<" = "<< multiplicacion << endl;
        tbl=tbl+1;
    }
    return 0;
}

