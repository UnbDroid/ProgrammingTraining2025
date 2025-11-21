#include <stdio.h>

int main(){
    float velocidade_linear, velocidade_angular, distancia_rodas;

    printf("Qual é a velocidade linear do Robô, em metros por segundo? \n");
    scanf("%f", &velocidade_linear);
    printf("Qual é a velocidade angular do Robô, em radianos por segundo? \n");
    scanf("%f", &velocidade_angular);
    printf("Qual é a distância entre as duas rodas do Robô? \n");
    scanf("%f", &distancia_rodas);

    float V_d = velocidade_linear + (velocidade_angular * distancia_rodas / 2);
    float V_e = velocidade_linear - (velocidade_angular * distancia_rodas / 2);

    printf("Velocidade da Roda direita: %.2f m/s\n", V_d);
    printf("Velocidade da Roda esquerda: %.2f m/s\n", V_e);



    return 0;
}