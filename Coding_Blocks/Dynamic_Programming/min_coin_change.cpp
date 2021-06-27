 #include<bits/stdc++.h>
#include<climits>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)

int min_coins_tu(int n, int coins[], int T, int dp[]){
	//Base Case
	if(n == 0){
		return 0;
	}
	if(dp[n]!=0){
		return dp[n];
	}
	int ans = INT_MAX;
	for(int i =0; i<T; i++){
		if(n-coins[i] >= 0){
			int subprob = min_coins_tu(n-coins[i], coins, T, dp);
			ans = min(ans, subprob+1);
		}
	}
	dp[n] = ans;
	return dp[n];
}

int min_coins_bu(int n, int coins[], int T){
	int dp[100] = {0};
	fo(i,1,n+1){
		dp[i] = INT_MAX;
		fo(j,0,T){
			if((i-coins[j]) >= 0){
				int subprob = dp[i-coins[j]];
				dp[i] = min(dp[i], subprob+1);
			}
		}
	}
	return dp[n];
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	n = 21;
	int coins[] ={ 1, 7, 10};
	int dp[100] = {0};
	int T = sizeof(coins)/sizeof(int);
	cout << min_coins_tu(n, coins, T, dp) <<" top-down" <<endl;
	cout << min_coins_bu(n, coins, T);
	return 0;
}