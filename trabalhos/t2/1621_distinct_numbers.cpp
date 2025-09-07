#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // lê o número de inteiros
    int n;
    cin >> n;

    // lê os inteiros
    map<int, bool> inteiros;
    for (int i = 0; i < n; i++)
    {
        int inteiro;
        cin >> inteiro;
        if (inteiros.find(inteiro) == inteiros.end()) inteiros.insert({inteiro, true});
    }

    cout << inteiros.size();

    return 0;
}