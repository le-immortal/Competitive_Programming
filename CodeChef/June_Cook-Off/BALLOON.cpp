#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)
 
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int T, N, K;
	cin >> T;
	test(T){
		int count = 7, ans = 0;
		cin >> N;
		int a[N];
		for(int i = 0; i < N; i++){
			cin >> a[i];
			
			if(a[i] <= 7){
				// cout << count;
				count--;
			}
			if(count == 0){
				cout << ans+1 <<endl;
				count--;
			}
			ans++;
		}
	}
	return 0;
}