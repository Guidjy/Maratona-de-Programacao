#include <stdio.h>
#include <iostream>
#include <cmath>  // round()

using namespace std;


int main() {
    // Para resolver esse exercício, o dinheiro tem que ser convertido para centavos para evitar impressisão
    // de ponto flutuante.
    float entrada;
    int n_notas[6] = {0};
    int notas[6] = {10000, 5000, 2000, 1000, 500, 200};
    int n_moedas[6] = {0};
    int moedas[6] = {100, 50, 25, 10, 5, 1};

    cin >> entrada;
    int valor = (int)round(entrada * 100);

    for (int i = 0; i < 6; i++)
    {
        n_notas[i] = valor / notas[i];
        valor %= notas[i];
    }

    for (int i = 0; i < 6; i++)
    {
        n_moedas[i] = valor / moedas[i];
        valor %= moedas[i];
    }

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d nota(s) de R$ %d.00\n", n_notas[i], notas[i]/100);
    }
    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) 
    {
        printf("%d moeda(s) de R$ %.2f\n", n_moedas[i], moedas[i] / 100.0);
    }
}