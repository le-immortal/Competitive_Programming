#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)
int fib(int n, int dp[]){
	if (n==0 || n ==1){
		return n;
	}

	if(dp[n]!=0){
		return dp[n];
	}
	int ans;
	ans = fib(n-1, dp) + fib(n-2, dp);
	return dp[n]= ans;
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int dp[100] = {0};

	cout << fib(n, dp);
	return 0;
}