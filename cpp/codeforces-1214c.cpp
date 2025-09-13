#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;

	string t;
	cin>>t;

	int balanco=0;
	int min_balanco=0;
	
	if(n%2!=0)
	{
		cout << "No";
		return 0;
	}
	
	for(auto parenteses : t)
	{
		if( parenteses=='(' ) balanco++;
		else balanco--;
		min_balanco=min(min_balanco,balanco);
	}

	if(balanco==0 && min_balanco >-2)
	{
		cout << "Yes";
	}
	else cout << "No";

	return 0;
}