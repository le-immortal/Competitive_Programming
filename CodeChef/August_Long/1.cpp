#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int solve()
{
	ll H, P;
	cin >> H >> P;
	while(P>0){
		H -= P;
		P /= 2;
		if(H<1)
			return 1;
	}
	if(H>0)
		return 0;
	else 
		return 1;;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);


	int T;
	cin>>T;

	while(T--)
		cout << solve() << endl;

	return 0;
}