#include <bits/stdc++.h>
using namespace std;

int main(){
    int numero;

    bool eh_perfeito(int numero);

    cout << "Informe um numero positivo: ";
    cin >> numero;
    if (eh_perfeito(numero)){
        cout << "eh perfeito";
    } else {
        cout << "nao eh perfeito";
    }
    return 0;
}

bool eh_perfeito(int numero){
    int soma = 0;
    for (int i = 1; i < numero; i++){
        if (numero % i == 0){
            soma += i;
        }
    }
    return numero == soma;
}
