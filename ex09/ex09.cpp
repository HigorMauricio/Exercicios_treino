#include <bits/stdc++.h>
using namespace std;

void calculo_media_valores(int qtd, float &media, int &valores_acima);

int main(){
    int qtd, valores_acima;
    float media;
    cout << "Quantos numero voce ira informar? ";
    cin >> qtd;

    calculo_media_valores(qtd, media, valores_acima);

    cout << "A media foi de: " << media << "\n";
    cout << "A quantidade de valores acima da media eh: " << valores_acima << "\n";
}

void calculo_media_valores(int qtd, float &media, int &valores_acima){
    int numero;
    media = 0;
    valores_acima = 0;
    for(int i = 1; i<=qtd; i++){
        cout << "Informe o valor " << i << " : ";
        cin >> numero;
        media += numero;
    }
    media /= qtd;
    for(int i = 1; i<=qtd; i++){
        cout << "Informe novamente o valor " << i << " : ";
        cin >> numero;
        if (numero > media){
            valores_acima ++;
        }
    }
}