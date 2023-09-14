#include <iostream>
#include <ctype.h>

using namespace std;

int main(){

    int num;

    cout << "Digite um numero inteiro: " << endl;
    cin >> num;

    cout << "Divisores do numero " << num << endl;
    for (int i=1; i<=num; i++){
        if(num%i==0){
            cout << i << endl;
        }
    }

    return 0;
}