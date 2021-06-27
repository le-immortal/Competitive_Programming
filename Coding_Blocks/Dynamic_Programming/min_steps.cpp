#include<bits/stdc++.h>
#include<climits>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)

//Min steps to one
//n -> n/3, n/2, n-1
int min_steps(int n, int dp[]){
	if(n==1){
		return 0; 
	}
		if(dp[n] != 0){
			return dp[n];
		}
		int op1, op2, op3;
		op1 = op2 = op3 = INT_MAX;
		if(n%3 ==0){
			op1 = min_steps(n/3, dp);
		}
		if(n%2 == 0){
			op2 = min_steps(n/2, dp);
		}
		op3 = min_steps(n-1, dp);

		int ans = min(min(op1, op2), op3) +1;
		return dp[n] = ans;
	
}

int min_steps_bu(int n){
	int dp[100] = {0};
	dp[1] = 0;
	fo(i,2,n+1){
		int op1, op2, op3;
		op1 = op2 = op3 = INT_MAX;
		if(i%3 ==0){
			op1 = dp[i/3];
		}
		if(i%2 == 0){
			op2 = dp[i/2];
		}
		op3 = dp[i-1];
		int ans = min(min(op1, op2), op3) +1;
		dp[i] = ans;
	}
	// fo(i,0,n+1){
	// 	cout << dp[i] <<endl;
	// }
	cout << endl;
	return dp[n];
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int dp[100] = {0};

	cout << min_steps(n, dp)<<" top-down "<< endl;
	// fo(i,0,n){
	// 	cout << dp[i] << " ";
	// } cout << endl;
	cout << min_steps_bu(n);

	return 0;
}