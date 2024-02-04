#include <iostream>
#include <string>
#include <map>
#include<vector>
using namespace std;

int main() {
    
    map<string, vector<string>> eq_param;
    
    eq_param["circunferencia"] = {"r*sin(t)", "r*cos(t)", "0 < t < 2*pi", "onde r é o raio da circunferência"};
    
    eq_param["seg reta"] = {"P0 + t*(P1 - P0)", "onde P1 e P0 são pontos da reta"};
    
    eq_param["elipse"] = {"a*cos(t)", "b*sin(t)", "0 < t < 2*pi", "onde a é o eixo maior da elipse, b é o eixo menor"};
    
    eq_param["ciclode"] = {"r*(T - sin(T))", "r*(1 - cos(T))", "onde T é a letra grega teta", "se r é igual a 4 o intervalo é t pertencente aos reais, se r = 3, 0 < t < 2*pi"};
    
    eq_param["cicloide de raio 5"] = {"5*(t - sin(t))", "5*(1 - cos(t))", "com t pertencente aos reais"};
    
    eq_param["curva de Bezier quad"] = {"(1 - t)*(1 - t)*P0 + 2*t*(1 - t)*P1 + t*t*P2", "com t pertencente ao intervalo 0 a 1"};
    
    eq_param["curva de Bezier cubic"] = {"(1 - t)*(1 - t)*(1 - t)*P0 + 3*t*(1 - t)*(1 - t)*P1 + 3*t*t*(1 - t)*P2 + t*t*t*P3", "com t variando de 0 a 1"};
    
    eq_param["helice circular"] = {"x = a*cos(t)", "y = a*sin(t)", "z = b*t", "onde t é o parâmetro", "A hélice entre os pontos (1, 0, 0) e (0, 1, pi/2) é x = cos(t), y = sin(t), z = t, com intervalo 0 < t < pi/2", "Uma volta da hélice de raio 1 ao redor do eixo x é x = t, y = cos(t), z = sin(t) e intervalo 0 < t < 2*pi"};
    
    eq_param["helice logaritmica"] = {"x = exp(t)*cos(t)", "y = exp(t)*sin(t)", "z = exp(t)", "com intervalo 0 < t < infinito"};
    
    eq_param["cubica retorcida"] = {"t", "t*t", "t*t*t", "com t pertencente aos reais"};
    
    eq_param["Toroide espiral"] = {"(3 + cos(10*t))*cos(t)", "(3 + cos(10*t))*sin(t)", "sin(10*t)", "variando de 0 a 2*pi"};

    string eq;
    cout << "Digite uma das equações abaixo: " << endl;
    for(auto it=eq_param.begin(); it!=eq_param.end(); ++it){
        cout << "- " << it->first << endl; 
    }
    getline(cin, eq);
    
    try {                     
        for(auto i : eq_param[eq]) {
            cout << i << endl;
        }
    }
    catch (const out_of_range& oor) { 
        cerr << "Item not found in dictionary" << endl; 
    } 

    string resp;
    cout << "Mais informações? (sim/nao)" << endl;
    getline(cin, resp);
    
    while (resp == "sim") {
        int info;
        cout << "Qual posição você quer mais informações?" << endl;
        cin >> info;
        try {
            cout << eq_param[eq][info] << endl;
        } 
        catch (const out_of_range& oor) {
            cerr << "Item not found in dictionary" << endl;
        }
        cout << "Mais informações? (sim/nao)" << endl;
        cin.ignore(); // limpa a quebra de linha anterior
        getline(cin, resp);
    }

    return 0;
}