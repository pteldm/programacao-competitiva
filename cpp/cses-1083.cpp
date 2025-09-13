#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int qtd_num = 0;

    cin >> qtd_num; // 3

    long long soma_recebidos = 0;

    long long aux = 0;

    long long soma_todos = 0;

    for(int i = 0 ; i < qtd_num -1 ; ++i)
    {
        cin >> aux;
        soma_recebidos += aux;
    }

    for(int i = 1 ; i <= qtd_num ; ++i)
    {
        soma_todos += i; // i = 1, 2, 3. valor final = 3
    }                    // soma_todos = 1, 3, 6. valor final = 6

    long long diff = abs((soma_recebidos-soma_todos)); // 3-6 = abs(3) = 3 número faltante = 3
                                                    // problemas que eu terei: provavelmente overflow por usar int
    cout << diff << "\n" ;

    return 0;
}