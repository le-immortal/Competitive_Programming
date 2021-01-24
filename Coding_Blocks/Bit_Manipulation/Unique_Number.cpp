#include <bits/stdc++.h>
using namespace std;

int main(){
	
#ifndef ONLINE_JUDGE	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int res = 0;
	while(n--){
		int x;
		cin >> x;
		res = res^x;
	}
	cout << res;

}