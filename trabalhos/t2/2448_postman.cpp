#include <bits/stdc++.h>

using namespace std;


// pesquisa binária que retorna o índice do elemento encontrado em vez de um booleano.
// retorna -1 se o elemento não for encontrado
int pesquisa_binaria(const vector<int> &self, const int a, const int b, const int v)
{
    if (a == b)
    {
        if (self[a] == v) return a;
    }

    int pm = round((a + b) / 2);
    if (self[pm] == v) return pm;

    if (self[pm] > v)
    {
        return pesquisa_binaria(self, a, pm-1, v);
    }
    else
    {
        return pesquisa_binaria(self, pm+1, b, v);
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // número de casas
    int n;
    cin >> n;
    // número de entregas
    int m;
    cin >> m;

    // le os números das casas
    vector<int> numeros_casas(n);
    for (int i = 0; i < n; i++)
    {
        cin >> numeros_casas[i];
    }
    // le o número das casas pára fazer uma entrega
    vector<int> entregas(m);
    for (int i = 0; i < m; i++)
    {
        cin >> entregas[i];
    }

    // distancia percorrida pelo carteiro
    int distancia = 0;
    // casa de onde o carteiro vai partir
    int casa_partida = numeros_casas[0];
    // índice da casa onde o carteiro está presentemente
    int casa_atual = 0;

    // calcula a distancia total percorrida para realizar todas as entregas
    for (int i = 0; i < m; i++)
    {
        // encontra o índice da casa da próxima entrega
        int prox_entrega = pesquisa_binaria(numeros_casas, 0, numeros_casas.size(), entregas[i]);
        // calcula distância entre casa atual e casa da entrega
        distancia += abs(prox_entrega - casa_atual);
        // atualiza a posição atual
        casa_atual = prox_entrega;
    }
    
    cout << distancia << "\n";

    return 0;
}