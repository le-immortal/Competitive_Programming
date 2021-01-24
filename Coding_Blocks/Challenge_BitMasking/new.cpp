#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
#ifndef ONLINE_JUDG
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;

	cin >>s;
	int a = s.length();

	int ans = (1 << a) - 2;
	for(int i = a-1,pos =0; i>=0;pos++, i--){
		if(s[i] == '7'){
			ans += (1 << pos);
		}
	}
	cout << ans +1 ;

	return 0;
}