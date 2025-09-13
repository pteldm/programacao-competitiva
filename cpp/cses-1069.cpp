#include<bits/stdc++.h>

using namespace std;

int main()
{
    string sequencia;
    cin >> sequencia;

    int repeticoes = 1;
    int maior_rep = repeticoes;

    for(auto i = 0 ; i+1 < sequencia.size() ; i++ )
    {                    
        if(sequencia[i] == sequencia[i+1])
        {
            repeticoes +=1;
        }
        else repeticoes = 1;
        
        if(repeticoes>maior_rep) maior_rep = repeticoes;
    }
    
    cout << maior_rep << "\n";
    return 0;
}
