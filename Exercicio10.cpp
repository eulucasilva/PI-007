#include <iostream>
#include <ctype.h>

using namespace std;

int main(){

    int num, ultimo=1, penult=0, prox=0;

    cout << "Digite um numero inteiro: " << endl;
    cin >> num;

    cout << "Sequencia de Fibonacci ate " << num << endl;
    while (penult <= num){
        cout << penult << endl;
        prox = penult+ultimo;
        penult = ultimo;
        ultimo = prox;
    }
    
    return 0;
}