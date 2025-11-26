#include <stdio.h>

int main(){
    float vLinear, // V
    vAngular, // ω 
    dRodas; // L

    printf("Insira a velocidade linear do robô, em m/s: \n");
    scanf("%f", &vLinear);
    printf("Insira a velocidade angular do robô, em rad/s: \n");
    scanf("%f", &vAngular);
    printf("Insira a distância entre as duas rodas do robô, em m: \n");
    scanf("%f", &dRodas);

    float V_d = vLinear + (vAngular * dRodas / 2);
    float V_e = vLinear - (vAngular * dRodas / 2);

    //Velocidade Linear da Roda Direita (Vd): Vd = V + (ω ⋅ L2)
    //Velocidade Linear da Roda Esquerda (Ve): Ve = V − (ω ⋅ L2)

    printf("Velocidade da roda direita: %.2f m/s\n", V_d);
    printf("Velocidade da roda esquerda: %.2f m/s\n", V_e);



    return 0;
}