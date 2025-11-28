#include <iostream>
using namespace std;

int main () {
    double v, w, l, vd, ve;

    cout << "Insira a Velocidade Linear Desejada do Robo: \n";
    cin >> v;
    cout << "Insira a Velocidade Angular Desejada do Robo: \n";
    cin >> w;
    cout << "Insira a Distancia entre as Rodas do Robo: \n";
    cin >> l;

    vd = v + (w * l * 0.5);
    ve = v - (w * l * 0.5);

    cout << "A Velocidade da Roda Direita e de " << vd << "m/s\n";
    cout << "A Velocidade da Roda Esquerda e de " << ve << "m/s\n";
    return 0;
}