## 🤖 Enunciado do Projeto: Calculadora de Cinemática de Robô Diferencial

### **Título do Projeto:** Calculadora de Cinemática Simples para Robô Diferencial

#### **Objetivo**

Desenvolver um programa de linha de comando (CLI) que calcule a **velocidade linear** necessária para cada uma das duas rodas (esquerda e direita) de um **robô diferencial**, com base em comandos de **velocidade linear do centro do robô** e **velocidade angular desejada**. Este projeto conecta os conceitos de cinemática e controle de movimento, fundamentais na área de **Mecatrônica**.

#### **Entradas do Usuário (Inputs)**

O programa deve solicitar ao usuário os seguintes três parâmetros:

1.  **Velocidade Linear Desejada do Robô** ($V$): A velocidade em linha reta do centro do robô (em $\text{m/s}$).
2.  **Velocidade Angular Desejada do Robô** ($\omega$): A taxa de rotação do robô em torno de seu eixo central (em $\text{rad/s}$). Um valor positivo indica uma curva para a esquerda, e um valor negativo indica uma curva para a direita.
3.  **Distância entre as Rodas** ($L$): A distância que separa o centro da roda esquerda do centro da roda direita (em metros, $\text{m}$).

#### **Cálculos de Cinemática**

O robô diferencial é caracterizado por ter duas rodas motrizes independentes (direita e esquerda). A velocidade de cada roda é calculada usando as seguintes equações de cinemática inversa:

* **Velocidade Linear da Roda Direita** ($V_d$):
    $$V_d = V + \left(\omega \cdot \frac{L}{2}\right)$$

* **Velocidade Linear da Roda Esquerda** ($V_e$):
    $$V_e = V - \left(\omega \cdot \frac{L}{2}\right)$$

#### **Saída do Programa (Output)**

O programa deve exibir claramente os resultados calculados para as velocidades de cada roda:

* Velocidade da Roda Direita ($V_d$) em $\text{m/s}$.
* Velocidade da Roda Esquerda ($V_e$) em $\text{m/s}$.

#### **Exemplo de Casos de Teste (Sugestão)**

| Cenário de Movimento | $V$ ($\text{m/s}$) | $\omega$ ($\text{rad/s}$) | $L$ ($\text{m}$) | $V_d$ ($\text{m/s}$) | $V_e$ ($\text{m/s}$) |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **Linha Reta** | 0.5 | 0.0 | 0.4 | 0.5 | 0.5 |
| **Curva à Esquerda** | 0.5 | 1.0 | 0.4 | 0.7 | 0.3 |
| **Curva à Direita** | 0.5 | -1.0 | 0.4 | 0.3 | 0.7 |
| **Rotação Pura (parado)** | 0.0 | 1.0 | 0.4 | 0.2 | -0.2 |



#### **Requisitos de Implementação**

1.  O programa deve ser implementado em uma linguagem de sua escolha (como C++, Python, etc.).
2.  Deve ser capaz de lidar com entradas de ponto flutuante (números decimais) para precisão.
3.  Deve incluir mensagens de *prompt* claras para o usuário sobre o que inserir.