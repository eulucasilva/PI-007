#include <iostream>
#include <ctype.h>

using namespace std;

int main(){

    int num, rev=0, aux=0;

    cout << "Digite um numero inteiro: " << endl;
    cin >> num;

    aux = num;

    while (aux != 0) {
        rev = rev * 10 + aux % 10;  
        aux = aux / 10;                     
    }

    if(num == rev) {
        cout << "Este numero eh um palindromo" << endl;
    }
    else {
        cout << "Este numero nao eh um palindromo" << endl;
    }





    return 0;
}