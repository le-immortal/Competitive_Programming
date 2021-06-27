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

	int T;
	cin >> T;
	int x;
	vector <int> v = {0,0,0,0};
	test(T){
		fo(i,0,4){
			cin >> x;
			v[i] = x;
		}
		if((v[0]+v[2] == 180) && v[1]+v[3] == 180)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		
	}
	return 0;
}