#include<bits/stdc++.h>

using namespace std;

int main(){
    int size_arr;
    
    cin >> size_arr;
    
    vector<long long> arr(size_arr);     
    
    for(auto index=0; index < size_arr; index++)
    {
        cin >> arr[index];
    }

    long long soma = arr[0];
    long long atual = 0;

    for(auto index=0; index < size_arr; index++)
    {
        atual = max(arr[index], atual + arr[index]);
        soma = max(soma, atual);
    }

    cout << soma << "\n";

    return 0;
}