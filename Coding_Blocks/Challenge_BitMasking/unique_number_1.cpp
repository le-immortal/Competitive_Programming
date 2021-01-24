#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	int a = 0;
	cin >> n;
	while(n--){
		int b;
		cin >> b;
		a = a ^ b; 
	}
	cout << a;

	return 0;
}