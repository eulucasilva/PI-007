#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> matriculas;
    vector<float> notas;
    vector<float> medias;
    int matricula = 0, aluno = 1, qtdNotas = 3;
    char continuar;
    float media = 0.0, somaNotas = 0.0;
    

    do{
        cout << "Digite a matricula do aluno " << aluno << ": " << endl;
        cin >> matricula;

        matriculas.push_back(matricula);

        for (int i=1; i<=qtdNotas; i++){
            float nota;
            cout << "Digite a nota " << i << " do aluno com matricula " << matricula << ": " << endl;
            cin >> nota;
            notas.push_back(nota);
            somaNotas += nota;
        }
        media = somaNotas / qtdNotas;
        medias.push_back(media);
    }while(continuar == 'S' || continuar == 's');

    cout<< "Matricula         " << "Nota1      " << "Nota2      " << "Nota3      " << "Media"  <<endl;
    cout<< "========================================================" <<endl;
    

    
    

    

    
    return 0;
}