#include <bits/stdc++.h>
using namespace std;

int main (){
    int provas, alunos;
    float media, nota, sum_notas = 0.0;

    cout << "Informe a quantidade de alunos: ";
    cin >> alunos;

    for(int c=1; c<=alunos; c++){
        media = 0;
        sum_notas = 0;
        if (c == 1){
            cout << "Informe a quantidade de provas: ";
            cin >> provas;
        }

        for (int i = 1; i<=provas; i++){
            cout << "Informe a nota da prova " <<i << " do aluno " << c << ": ";
            cin >> nota;
            sum_notas += nota;
        }

        media = sum_notas / provas;
        cout << "A media eh de: " << media << "\n";
    }
    return 0;
}
