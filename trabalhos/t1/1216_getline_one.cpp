#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main() {
    string nome;
    double distancia;
    double soma = 0;
    int count = 0;

    while (getline(cin, nome))  // lê o nome inteiro
    {
        if (!(cin >> distancia)) break;
        soma += distancia;
        count++;
        cin.ignore();  // ignore newline after distance
    }

    // 0-0: cin >> nome para de ler depois do primeiro espaço, ou seja, se for ler o nome "João da Silva",
    // apenas leria "João". Por isso, se usa getline(), que pega tudo até o final da linha. Além disso,
    // deve-se usar "cin.ignore()", pois depois que "cin >> distância" é executado, o "\n" desse input
    // fica na buffer e a próxima vez que getline() fosse executado, o nome seria pulado pois apenas iria receber "\n".

    double media = soma / count;
    printf("%.1f\n", media);
    return 0;
}
