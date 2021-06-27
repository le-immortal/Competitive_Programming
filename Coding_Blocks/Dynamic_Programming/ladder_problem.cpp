 #include<bits/stdc++.h>
#include<climits>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)

int ladder_optimised(int n, int k){
	int dp[100] = {0};
	dp[0]= dp[1] = 1;
	fo(i,2,k+1){
		dp[i] = 2*dp[i-1];	
	}
	fo(i,k+1, n+1){
		dp[i] = 2*dp[i-1] - dp[i-k-1];
	}	
	return dp[n];
}

int ladder_topdown(int n, int k, int dp[]){
	if(n == 0){
		return 1;
	}else{
		if(dp[n] != 0){
			return dp[n];
		}
		int ways = 0;
		fo(i,1,k+1){
			if((n-i)>=0){
				ways += ladder_topdown(n-i,k,dp);
			}
		}

	return dp[n] = ways;
}
}

int ladder_bottomup(int n, int k){
	int dp[100] = {0};
	dp[0] = 1;
	fo(i,1,n+1){
		dp[i] = 0;
		fo(j,1,k+1){
			if(i-j>=0)
			dp[i] += dp[i-j];
		}
	}
	return dp[n];
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif
 	int n,k;
 	cin >> n >> k;
 	int dp[100] = {0};
 	cout << ladder_topdown(n,k,dp) <<endl;
 	cout << ladder_bottomup(n,k) <<endl;
 	cout << ladder_optimised(n,k);
	return 0;
}