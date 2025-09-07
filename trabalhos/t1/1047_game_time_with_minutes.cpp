#include <iostream>
#include <cstdio>
using namespace std;


int main() {
    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;

    // converte horarios para minutos
    int inicio = h1 * 60 + m1;
    int fim = h2 * 60 + m2;

    // verifica se o jogo acabou no próxmimo dia ou no mesmo horário do dia seguinte
    if (fim <= inicio) {
        fim += 24 * 60;
    }

    int duracao = fim - inicio;
    int horas = duracao / 60;
    int minutos = duracao % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

    return 0;
}
