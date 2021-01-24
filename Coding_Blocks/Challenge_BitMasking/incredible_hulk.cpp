#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
#ifndef ONLINE_JUDG
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		cout << __builtin_popcount(a) <<endl;
	}
	return 0;
}