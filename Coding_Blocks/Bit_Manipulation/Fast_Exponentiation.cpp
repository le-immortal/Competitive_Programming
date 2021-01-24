# include <bits/stdc++.h>
using namespace std;
#define ll long long

//Fast Exponentiation

int fastExpo(int n, int p){
	int ans = 1;
	while(p > 0){
		if((p&1) == 1){
			ans = ans*n;
		}
		n *=n ;
		p = p >> 1;
	}
	return ans;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n,p;

	cin >> n >> p;

	cout << fastExpo(n,p);

	return 0;
}