#include <iostream>
using namespace std;
int main() {
    float V;
    float w;
    float L;
    cout<<"Digite a velocidade linear desejada do robô:";
    cin>>V;
    cout<<"Digite a velocidade angular desejada do robô:";
    cin>>w;
    cout<<"Digite distância entre as rodas:";
    cin>>L;
    cout << "A velocidade da roda direita é:" <<  (V+(w*L/2)) << "m/s" << endl;
    cout << "A velocidade da roda esquerda é:" << (V-(w*L/2)) << "m/s" << endl;


return 0;
}