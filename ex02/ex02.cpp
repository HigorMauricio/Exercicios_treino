#include <bits/stdc++.h>
using namespace std;

int main(){

    char selecionador;
    float temperaturaf, temperaturac, temperaturak;

    cout << "Qual temperatura deseja informar? [F], [C] ou [K]?\n";
    cin >> selecionador;

    if (selecionador == 'F'){
        char conversor;
        cout << "Qual a temperatura?\n";
        cin >> temperaturaf;
        cout << "Para qual temperatura deseja converter? [C] ou [K]?\n";
        cin >> conversor;
        if (conversor == 'C'){
            temperaturac = (temperaturaf-32) * 5/9;
            cout << "A temperatura em Celsius eh: " << temperaturac;
        } else{
            temperaturak = (temperaturaf - 32) * 5/9 + 273;
            cout << "A temperatura em Kelvin eh: " << temperaturak;
        }

    } else if (selecionador == 'C'){
        char conversor;
        cout << "Qual a temperatura?\n";
        cin >> temperaturac;
        cout << "Para qual temperatura deseja converter? [F] ou [K]?\n";
        cin >> conversor;
        if (conversor == 'F'){
            temperaturaf  = (temperaturac * 9/5) + 32;
            cout << "A temperatura em Fahrenheit eh: " << temperaturaf;
        } else{
            temperaturak = temperaturac + 273;
            cout << "A temperatura em Kelvin eh: " << temperaturak;
        }
    } else{
        char conversor;
        cout << "Qual a temperatura?\n";
        cin >> temperaturak;
        cout << "Para qual temperatura deseja converter? [F] ou [C]?\n";
        cin >> conversor;
        if (conversor == 'F'){
            temperaturaf = (temperaturak- 273) * 9/5 + 32;
            cout << "A temperatura em Fahrenheit eh: " << temperaturaf;
        } else{
            temperaturac = temperaturak - 273;
            cout << "A temperatura em Celsius eh: " << temperaturac;
        }
    }
    return 0;
}