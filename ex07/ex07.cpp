#include <bits/stdc++.h>
using namespace std;

void maior_menor(int quantidade, int &maior, int &menor);

int main(){
    int quantidade, maior, menor;

    cout << "Informe quantos valores voce vai digitar: ";
    cin >> quantidade;

    maior_menor(quantidade, maior, menor);

    cout << menor << "\n";
    cout << maior << "\n";

    return 0;
}

void maior_menor(int quantidade, int &maior, int &menor){
    for (int i=1; i <= quantidade; i++){
        int numero;
        cout << "Informe o numero "  << i << " : ";
        cin >> numero;
        if(i == 1){
            maior = menor = numero;
        } else{
            if(numero > maior){
                maior = numero;
            }
            if (numero < menor){
                menor = numero;
            }
        }
    }
}