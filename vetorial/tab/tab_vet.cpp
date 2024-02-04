#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    unordered_map<string, vector<string>> dict;

    // Adicionando elementos no dicionário
    dict["circunferencia"].push_back("r.sent, r.cost");
    dict["circunferencia"].push_back("0 < t < 2*pi");
    dict["circunferencia"].push_back("onde r e o raio da circunferencia");
    dict["seg reta"].push_back("P0 + t*(P1 - P0)");
    dict["seg reta"].push_back("onde P1 e P0 sao os pontos da reta");
    dict["elipse"].push_back("a.cost, bsent");
    dict["elipse"].push_back("0 < t < 2*pi");


    // Percorrendo o dicionário
    for(auto it = dict.begin(); it != dict.end(); it++) {
        string key = it->first;
        vector<string> values = it->second;

        cout << key << ": ";
        for(auto value : values) {
            cout << value << " ";
        }
        cout << endl;
    }
    
    return 0;
}
