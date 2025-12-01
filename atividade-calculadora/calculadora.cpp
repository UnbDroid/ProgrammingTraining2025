#include <iostream>

using namespace std;

int main() {
    float v;
    float w;
    float l;

    cout << "Utilize sempre números decimais para precisão!" << endl;

    cout << "Digite a Velocidade Linear Desejada do Robô em m/s:" << endl;
    cin >> v;

    cout << "Digite a Velocidade Angular Desejada do Robô em rad/s:" << endl;
    cin >> w;

    cout << "Digite a Distância entre as Rodas em m:" << endl;
    cin >> l;

    float constante = w*(l/2);

    // Velocidade da Roda direita
    float vd = v + constante;

    // Velocidade da Roda esquerda
    float ve = v - constante;


    cout << "A Velocidade Linear da Roda Direita é " << vd << " m/s" << endl;
    cout << "A Velocidade Linear da Roda Esquerda é " << ve << " m/s" << endl;

    return 0;
}