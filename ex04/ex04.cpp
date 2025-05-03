#include <bits/stdc++.h>
using namespace std;

int main(){
    int reais, preco, promo, chocolates;
    cout << "Informe quantos reais, o preco do chocolate e a promocao existente: ";
    cin >> reais >> preco >> promo;
    chocolates = reais / preco;
    int embalagens = chocolates;
    while(embalagens >= promo){
        int recompensa;
        recompensa = embalagens / promo;
        chocolates += recompensa;
        embalagens = (embalagens - recompensa*promo) + recompensa;
    }
    cout << chocolates;
    return 0;
}
