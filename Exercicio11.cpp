#include <iostream>

using namespace std;

int main() {

    int num, originalNum, restante, resultado = 0;
    cout << "Digite um numero : ";
    cin >> num;
    originalNum = num;

    while (originalNum != 0) {

        restante = originalNum % 10; // pega o ultimo digito
        
        resultado += restante * restante * restante;
        
        originalNum /= 10; // remove o ultimo digito da variavel originalNum
    }

    if (resultado == num)
        cout << num << " eh um numero Armstrong";
    else
        cout << num << " nao eh um numero Armstrong";

    return 0;
}