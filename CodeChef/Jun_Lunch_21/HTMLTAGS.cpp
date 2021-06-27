#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)
#define pb push_back
#define popb pop_back
#define MOD 1000000007

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector <char> v;
	int T; 
	cin >> T;
	string x;
	test(T){
		cin >> x;
		int n = x.length();
		int flag = 0;
		// cout << x;
		if(x[0] == '<' && x[1] == '/' && x[n-1] == '>'){
			fo(i,2,n-1){
				// cout << int(x[i]) << " ";
				if((int(x[i])<123 && int(x[i])>96) || (int(x[i])<58 && int(x[i])>47)){
					continue;
				}else{
					flag = 1;
					break;
				}
			}
		}else{
			flag = 1;
		}
		if(flag)
			cout << "Error\n";
		else{
			cout << "Success\n";
		}
	}
	return 0;
}