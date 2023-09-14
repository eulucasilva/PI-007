#include <iostream>
#include <time.h>

using namespace std;

int main(){


    int numAleatorio, numUsuario;
    bool acertou = false;

    srand(time(nullptr));
    numAleatorio = 1 + rand() % 100;

    cout << "----------- Vamos advinhar? ------------" << endl;

    do {
        cout << "Digite um numero entre 1 e 100: " << endl;
        cin >> numUsuario;

        if (numUsuario == numAleatorio){
            cout << "Parabens, voce acertou!" << endl;
            acertou = true;
        }
        else if (numUsuario > numAleatorio){
            cout << "O palpite esta alto, tente novamente" << endl;
        }
        else{
            cout << "O palpite esta baixo, tente novamente" << endl;
        }
    } while(!acertou);
    

    return 0;
}