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
	string a,b;
	while(n--){
		cin >> a >> b;
		string c = "";
		
		for(int i = 0; i < a.length(); i++){
			int a1 = (int)(a[i] );
			int b1 = (int)(b[i] );
			
			cout << (a1^b1);
		}
		cout << endl;
	}
	return 0;
}