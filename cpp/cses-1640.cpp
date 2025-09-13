#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    int x;
    cin >> x;
 
    vector<pair<long long , int>> valores;
 
    for(int i = 0 ; i < n ; i++)
    {
        long long entrada;
        cin >> entrada;
        valores.push_back({entrada, i+1});
    }
    
    sort(valores.begin(), valores.end());
    
    auto it_ini = valores.begin();
    auto it_fim = --valores.end();
 
    while(it_ini != it_fim)
    {
        auto teste = it_ini->first + it_fim->first;
 
        if(teste < x)
        {
            it_ini++;
        }
        
        if(teste > x)
        {
            it_fim--;
        } 
        
        if(teste == x)
        {
            cout << it_ini->second << " " << it_fim->second;
            return 0;
        }
    }
    cout << "IMPOSSIBLE";  // se não pe maior nem maior nem igual é porque não dá pra somar x+y e obter x pra esses valores
    return 0;
}