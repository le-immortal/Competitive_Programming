#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int solve()
{
	int C, R, powC, powR;
	cin >> C >> R;
	powC = (C%9 == 0)? C/9 : C/9 + 1;
	powR = (R%9 == 0)? R/9 : R/9 + 1;
	if(log10(powC) >= log10(powR))
		cout << 1 <<" "<< powR << endl;
	else 
		cout << 0 << " " << powC <<endl;

	return 0;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);


	int T;
	cin>>T;

	while(T--)
		solve(); 

	return 0;
}