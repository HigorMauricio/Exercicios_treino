#include <bits/stdc++.h>
using namespace std;

bool eh_bissexto(int ano);

int main(){
    int idade, idade_dias, ano;
    cout << "Informe sua idade: ";
    cin >> idade;
    idade_dias = 0;
    for (idade; idade > 0; idade--){
        ano = 2025 - idade;
        if (eh_bissexto(ano) == true){
            idade_dias += 366;
        } else{
            idade_dias += 365;
        }
    }

    cout << "Sua idade em dias eh: " << idade_dias << "\n";
    return 0;
}

bool eh_bissexto(int ano){
    if (ano % 4 == 0){
        if (ano % 100 == 0){
            if (ano % 400 == 0){
                return true;
            } else {
                return false;
            }
        } else {
            return true;
        }
    } else {
        return false;
    }
}