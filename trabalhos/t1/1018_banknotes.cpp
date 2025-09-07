#include <stdio.h>
#include <iostream>

using namespace std;


int main() {
    int entrada;
    int n_notas[7] = {0};
    int valores[7] = {100, 50, 20, 10, 5, 2, 1};

    cin >> entrada;
    int entrada_original = entrada;

    for (int i = 0; i < 7; i++) 
    {
        n_notas[i] = entrada / valores[i];
        entrada %= valores[i];
    }

    printf("%d\n", entrada_original);
    for (int i = 0; i < 7; i++) 
    {
        printf("%d nota(s) de R$ %d,00\n", n_notas[i], valores[i]);
    }
    
}