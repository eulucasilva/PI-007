#include <iostream>
#include <ctype.h>

using namespace std;

int main(){

    int num, ultimo=1, penult=0, aux=0;

    cout << "Digite um numero inteiro: " << endl;
    cin >> num;

    cout << penult << endl << ultimo << endl;
    for(int i=3; i<=num; i++){
        cout << (penult + ultimo) << endl;
        aux = penult;
        penult = ultimo;
        ultimo = ultimo + aux;
    }
    
    return 0;
}