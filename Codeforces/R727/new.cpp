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
	ll k, n,q;
	cin >> n >> q;
	string s;
	cin >> s;
	unordered_map<char, pair<ll, ll>>d;
	ll l,r;
	test(q){
	cin >> l >> r;
	// cout << l <<r;
	for(ll i = l-1; i < r; i++){
		// cout << s[i];
		d[s[i]].first++;
		d[s[i]].second = int(s[i])-int('a')+1;
	}
	ll count = 0;
	for(char i : s){
		if(d[i].first!=0){
			count += d[i].first*d[i].second;
			// cout << d[i].second << i<< " ";
			d[i].first = 0;
		}
	}
	cout << count <<endl;
	d.clear();

	}
	return 0;
}