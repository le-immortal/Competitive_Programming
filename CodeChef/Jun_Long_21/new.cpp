#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)
#define MOD 1000000007 
// ll power(ll x, ll y)
// {
//     ll temp;
//     if(x==0)
//     	return 0;
//     if(y == 0)
//         return 1;
//     temp = power(x, y / 2);
//     if (y % 2 == 0)
//         return ((temp%MOD) * (temp%MOD))%MOD;
//     else
//     {
//             return ((x%MOD )* (temp%MOD) * (temp%MOD))%MOD;
      
//     }
// }

ll power(ll x, ll y){
	if(x == 0)
		return 0;
	if(y == 0)
		return 1;
	if((y%2) == 0)
		return ((power(x,y/2)%MOD)*(power(x,y/2)%MOD))%MOD;
	else{
		ll res = ((power(x,y/2)%MOD)*(power(x,y/2)%MOD))%MOD;
		res =((res%MOD)*(x%MOD))%MOD;
		return res;
	}
}
	
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll T, N, M;
	cin >> T;
	ll x;
	while(T--){
		cin >> N >> M;
		if(N==0){
			cout << 0 << endl;
			continue;
		}
		if(M==0){
			cout << 1 <<endl;
			continue;
		}
		if(N <0 || M < 0){
			cout << 0 <<endl;
			continue;
		}
		// cout << power(2,N) <<endl;
		cout << power(((power(2,N) -1)),M ) <<endl;
	
	}
	return 0;
}