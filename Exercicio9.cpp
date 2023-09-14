#include <iostream>
#include <ctype.h>

using namespace std;

int main(){

    int somaDivisores=0;

    int num;

    cout << "Digite um numero inteiro: " << endl;
    cin >> num;

    for (int i=1; i<num; i++){
        if(num%i==0){
            somaDivisores+=i;
        }
    }
    if(somaDivisores==num){
        cout << "Este numero eh um quadrado perfeito" << endl;
    }
    else{
        cout << "Este numero nao eh um quadrado perfeito" << endl;
    }

    return 0;
}