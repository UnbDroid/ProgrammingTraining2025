#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    float V, Vd, Ve, omega, L;

    cout << "Digite a Velocidade Linear desejada em m/s: " << endl;
    cin >> V;

    cout << "Digite a Velocidade Angular desejada em rad/s: " << endl;
    cin >> omega;

    cout << "Digite a distância entre as rodas em m: " << endl;
    cin >> L;

    Vd = V+omega*L/2;
    Ve = V-omega*L/2;

    printf("Velocidade da Roda Direita: %.3f m/s\n", Vd);
    printf("Velocidade da Roda Esquerda: %.3f m/s\n", Ve);
    return 0;
}