#include <stdio.h>
#include <string.h>

int main(){
    while(1==1){
        float dados[3]={0,0,0};
        float vd=0;
        float ve=0;
        char entrada[10];
        printf("* Regras de funcionamento *");
        printf("\n- Apenas os 10 primeiros caracteres digitados serão utilizados");
        printf("\n- Use '.' se o digito tiver casas decimais\n\n");

        for(int h=0; h<3; h++){
            int prox=0;
            while(prox==0){
                switch(h){
                case 0:
                    printf("Digite a velocidade linear (em m/s) do robô: ");
                    break;
                case 1:
                    printf("Digite a velocidade angular (em rads/s) do robô: ");
                    break;
                case 2:
                    printf("Digite a distancia entre as rodas (em m) do robô: ");
                    break;
                }
                scanf("%10s",entrada);
                prox=1;
                for(int i=0; i<strlen(entrada); i++){
                    if(strchr("-",entrada[i])!=NULL && i==0)
                        i++;
                    if(strchr("0123456789",entrada[i])!=NULL && strchr(".",entrada[i+1])!=NULL)
                        i+=1;
                    else if(strchr("0123456789",entrada[i])==NULL)
                        prox=0;
                }
            }
            sscanf(entrada, "%f", &dados[h]);
            printf("\n");
        }

        vd=dados[0]+(dados[1]*dados[2]/2.0);
        ve=dados[0]-(dados[1]*dados[2]/2.0);
        printf("Velocidade Linear da Roda Direita: %.2f m/s\n",vd);
        printf("Velocidade Linear da Roda Esquerda: %.2f m/s\n",ve);
    }
    return 0;
}