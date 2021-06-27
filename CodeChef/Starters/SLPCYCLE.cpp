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

	// ll T,L,H;
	// string s;
	// cin >> T;
	// test(T){
	// 	cin >> L >> H >> s;
	// 	// cout << s << " ";
	// 	ll x = 0;
	// 	// if(H == 0)
	// 	// 	cout << "YES\n"; continue; 
	// 	fo(i,0,L){
	// 		if(s[i] == '1'){
	// 			if(x){
	// 				H = 2*(H-x);
	// 			}x = 0;

	// 			continue;
	// 		}
	// 		else{
	// 				x++;
	// 			// cout << x << " 0 ";
	// 				// cout << x;
	// 			if(x == H){
	// 				H = 0;
	// 				break;
	// 			}
			
	// 		}
	// 		// cout << s[i] << " ";
	// 	}
	// 	if(H)
	// 		cout << "NO\n";
	// 	else
	// 		cout << "YES\n";
	// }
	int T;
	cin >> T;
	ll H,L;
	string str;
	ll s = 0,e = 0;
	test(T){
		cin >> L >> H >> str;
		int flag = 0;
		s=e=0;
		for(int i = 0; i < L; i++){
			
			if(str[i] == '0'){
				e++;
				// cout << e;
			}else{
				if(e-s){
				H = 2*(H - (e-s));
				}
				// cout << i;
				s=e=i+1;
			}
						// cout << (e-s) << " " << H << " ";
				if((e-s) == H){
				flag = 1;
				break;
			}

		}
		if(flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
			
}