#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // lê o número de test cases
    int nc;
    cin >> nc;

    for (int i = 0; i < nc; i++)
    {
        // lê o número de pessoas na cidade
        int n;
        cin >> n;

        // lê as alturas das pessoas
        vector<int> alturas(n);
        for (int i = 0; i < n; i++)
        {
            cin >> alturas[i];
        }

        sort(alturas.begin(), alturas.end());

        // imprime as alturas
        for (int i = 0; i < n; i++)
        {
            cout << alturas[i];
            if (i < n-1) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}