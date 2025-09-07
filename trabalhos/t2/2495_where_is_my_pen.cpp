#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // para achar a caneta que está faltando, podemos calcular a soma de [1, n], 
    // a soma do número de todas as canetas, e subtrai-las

    int n;
    while(cin >> n)
    {
        // calcula a soma de [1, n]
        int soma_total = n * (n+1) / 2;  // soma de [1, n] = n*(n+1)/2

        // soma do número de todas as canetas
        int soma_retornados = 0;
        for (int i = 0; i < n-1; i++)
        {
            int x;
            cin >> x;
            soma_retornados += x;
        }

        // mostra a caneta que está faltando
        cout << soma_total - soma_retornados << "\n";
    }

    return 0;
}