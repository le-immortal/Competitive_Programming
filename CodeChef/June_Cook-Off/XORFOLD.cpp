#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)
#define MOD 1000000007
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
	ll T, N, M;
	cin >> T;
	int ans = 0;
	string x;
	test(T){
		cin >> N >> M;
		// cout << N <<  M;
			ans = 0;
			test(N){
				cin >> x;
				for(auto i: x)
					if(i == '1')
						ans++;
			}
			// cout << ans;
		cout << ((ans&1) ? "YES" : "NO" )<<endl;
	}
	return 0;
}