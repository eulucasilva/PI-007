#include <iostream>
#include <ctype.h>

using namespace std;

int main(){

    int num;
    char letra = 65;

    cout << "Digite um numero inteiro positivo: " << endl;
    cin >> num;

    for (int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            cout << letra;
            letra ++;
            if(letra==91){
            letra = 65;
        }
        }
        cout << endl;
   }

    return 0;
}