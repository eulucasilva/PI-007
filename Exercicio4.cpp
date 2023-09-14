#include <iostream>
#include <ctype.h>

using namespace std;

int main(){

    int qtdDivisor;

    cout << "Numeros primos de 1 a 100 " << endl;
    for (int i=1; i<=100; i++){
        qtdDivisor=0;
        for(int j=1; j<=i; j++){
            if(i%j==0){
                qtdDivisor++;
            }
        }
        if(qtdDivisor==2){
            cout << i << endl;
        }
    }

    return 0;
}