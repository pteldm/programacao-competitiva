#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num_values;
    cin >> num_values;
    
    vector<long long> vetor(num_values);

    for(int i = 0 ; i < num_values ; i++)
    {
        cin >> vetor[i];   
    }
    
    sort(vetor.begin(), vetor.end());
    
    auto fim_original = vetor.end();
    auto novo_fim = unique(vetor.begin(),vetor.end());
    
    vetor.erase(novo_fim, fim_original);

    auto valores_distintos = vetor.size();
    
    cout << valores_distintos << "\n";

    return 0;
}