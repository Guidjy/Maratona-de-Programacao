#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // lê o tamanho do vetor e o valor da soma
    int n, x;
    cin >> n >> x;

    // lê os valores e índices originais do vetor
    vector<pair<int, int>> valores(n);
    for (int i = 0; i < n; i++)
    {
        cin >> valores[i].first;    // valor
        valores[i].second = i + 1;  // índice
    }

    sort(valores.begin(), valores.end());

    int i = 0;
    int j = valores.size() - 1;
    while (i < j)
    {
        int soma = valores[i].first + valores[j].first;
        
        if (soma == x)
        {
            cout << valores[i].second << " " << valores[j].second << "\n";
            return 0;
        }

        if (soma > x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}