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
	ll t,x,a,b;
	cin >> t;
	test(t){	
		cin>> x>> a>> b;
		ll tiles = x+1;
		if(((a%b)==0) || (((tiles-a)%b)==0)){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}

	return 0;
}