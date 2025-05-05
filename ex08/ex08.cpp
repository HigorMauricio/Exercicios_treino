#include <bits/stdc++.h>
using namespace std;

void fatoriais(int numero, int &fatorial, int &multiplicacoes);

int main(){
    int numero, fatorial, multiplicacoes;
    cout << "Informe um numero: ";
    cin >> numero;

    fatoriais(numero, fatorial, multiplicacoes);

    cout << "O fatorial do numero " << numero << " eh: " << fatorial << "\n";
    cout << "Ocorreram " << multiplicacoes << " multiplicacoes";

    return 0;
}

void fatoriais(int numero, int &fatorial, int &multiplicacoes){
    fatorial = 1;
    for (int i = 1; i<= numero; i++){
        fatorial *= i; 
    }
    if (numero == 0){
        multiplicacoes = 0;
        
    } else{
        multiplicacoes = numero - 1;
    }
}
