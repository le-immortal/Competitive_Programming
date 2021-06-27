#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)
 
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll T, d, D, P, Q;
	cin >> T;
	while(T--){
		cin >> D >> d >> P >> Q;
		int n = D/d;
		int r = D%d;

		cout << ((n*d*P)+(Q*d*(n)*(n-1)/2)+(r*(P+n*Q)))<<endl;
	}

	return 0;
}