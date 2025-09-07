#include <bits/stdc++.h>


using namespace std;


bool comp(string a, string b)
{
    return a.size() > b.size();
}


int main()
{
    // número de strings que serão lidas
    int n;
    cin >> n;
    cin.ignore();  // ignora o '\n'

    // lê as strings
    vector<vector<string>> strs(n);
    for (int i = 0; i < n; i++)
    {
        // lê a linha inteira
        string linha;
        getline(cin, linha);

        // separa a linha por espaços
        istringstream iss(linha);
        string palavra;
        while (iss >> palavra)
        {
            strs[i].push_back(palavra);
        }
    }

    // ordena as strings
    for (int i = 0; i < n; i++)
    {
        stable_sort(strs[i].begin(), strs[i].end(), comp);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < strs[i].size(); j++)
        {
            cout << strs[i][j];
            if (j != strs[i].size() - 1) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}