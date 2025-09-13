#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int size_arr = 0;
 
    cin >> size_arr;
 
    vector <long long> inc_arr(size_arr);
 
    long long moves = 0;

    for(int i = 0; i < inc_arr.size(); ++i)
    {
        cin >> inc_arr[i];

        if( (i>0) && (inc_arr[i]<inc_arr[i-1]) )
        {
            moves += abs(inc_arr[i-1] - inc_arr[i]);
            inc_arr[i] = inc_arr[i-1];
        }
    } 
    cout << moves << "\n";
 
    return 0;
}