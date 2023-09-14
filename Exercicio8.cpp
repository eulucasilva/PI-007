#include <iostream>
#include <ctype.h>

using namespace std;

int main(){

    int num;

    cout << "Digite um numero inteiro positivo: " << endl;
    cin >> num;

    cout << "Padrao A) " << endl;
    for (int i=1; i<=num*num; i++){
        cout << "*";
        if(i%num == 0){
            cout << endl;
        }
    }

    cout << "Padrao B) " << endl;
    for (int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
   }

   cout << "Padrao C) " << endl;
    for (int i=1; i<=num; i++){
        for(int j=1; j<=num; j++){
            if (i==1 || i==num || j==1 || j==num){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
   }

    return 0;
}