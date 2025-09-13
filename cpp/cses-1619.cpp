#include<bits/stdc++.h>

using namespace std;

int main()
{

    int num_customers=0;
    cin >> num_customers;

    map<int,int> eventos;

    for(int i = 0 ; i < num_customers ; ++i)
    {
        int entrada=0, saida=0;

        cin >> entrada >> saida;

        eventos[entrada]++;
        eventos[saida]--;
    }

    long long clientes_atuais=0;
    long long max_clientes=0;

    for(auto [tempo, mudanca] : eventos)
    {
        clientes_atuais += mudanca;
        max_clientes = max(clientes_atuais, max_clientes);
    }

    cout << max_clientes << "\n";

    return 0;
}