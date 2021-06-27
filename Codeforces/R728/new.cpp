#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)
 
int main(){
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt","r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int t, n;

	cin >> t;
	test(t){
		cin >> n;
		if(!(n&1)){
			fo(i,1,(n+1)){
				if(i&1)
					cout << i+1 << " ";
				else
					cout << i-1 << " ";
			}	
		}
		else{
				cout << n << " ";
				fo(i,0,n-1){
					cout << i+1 << " ";
				}
		}		cout << endl;
	}

	return 0;
}