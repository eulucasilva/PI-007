#include <iostream>
#include <ctype.h>

using namespace std;

int main(){

    for (int i=1; i<=100; i++){
        cout << i << " ";
        if(i % 3 == 0){
            cout << "Fizz";
        }
        if(i % 5 == 0){
            cout << "Buzz" << " ";
        }
    }

    return 0;
}