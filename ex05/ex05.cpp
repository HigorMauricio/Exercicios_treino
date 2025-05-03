#include <bits/stdc++.h>
using namespace std;

int main(){
    int numero, soma, parcela;
    cout << "Informe um numero inteiro: ";
    cin >> numero;
    while(numero >= 10){
        soma = 0;
        while (numero > 0){
            int digito = numero % 10;
            soma += digito;
            numero /= 10;
        }
        numero = soma;
    }
    cout << numero;
    return 0;
}
