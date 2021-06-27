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
	int N,A,B;
	test(T){
		cin >> N >> A >> B;
		cout <<( 2*(N+180) - (A+B)) << endl;
	}

	return 0;
}