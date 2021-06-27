#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)
#define newline cout<<"\n";
const int MX = 1e5+5;
const int MOD = 1e9 + 7;

vector <int> ans(MX);

void pre(){
	ans[1] = 1;
	fo(i,2,MX){
		ans[i] = (ans[i-1]*2)%MOD;
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif	
	pre();
	int t;
	cin >> t;
	test(t){
		int n;
		cin >> n;
		cout << ans[n];
		newline
	}
	return 0;
}