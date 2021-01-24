#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int q,a,b;
	cin >> q;
	while(q--){
		cin >> a >> b;
		int count = 0;
		for(int i = a; i <=b; i++){
			count += __builtin_popcount(i);
		}
		cout << count << endl;
	}
	return 0;
}