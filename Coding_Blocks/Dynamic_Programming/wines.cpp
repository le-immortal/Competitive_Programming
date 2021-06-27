 #include<bits/stdc++.h>
#include<climits>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)

int profit(int wines[], int i, int j, int y, int dp[][100]){
	if(i>j){
		return 0;
	}
	if(dp[i][j]!=0){
		return dp[i][j];
	}
	int op1 = wines[i]* y + profit(wines, i+1,j,y+1,dp);
	int op2 = wines[j]* y + profit(wines, i, j-1, y+1,dp); 
	return dp[i][j] =  max(op1, op2);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int wines[] = {2,3,5,1,4};
	int y =1;
	int dp[100][100] = {0};
	int n = sizeof(wines)/sizeof(int);
	cout << profit(wines, 0, n-1, y, dp); 
	return 0;
}