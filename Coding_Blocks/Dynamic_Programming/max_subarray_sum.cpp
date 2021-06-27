 #include<bits/stdc++.h>
#include<climits>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)


int max_sum(int a[], int n){
	int dp[100] = {0};
	dp[0] = a[0] > 0? a[0]:0;
	int max_ans = dp[0];
	fo(i,1,n){
		dp[i] = dp[i-1] + a[i];
		if(dp[i] < 0){
			dp[i] = 0;
		}
		max_ans = max(dp[i], max_ans);
	}
	return max_ans;
}

//space optimised code
//Kadane's Algo
int max_sum_space_opt(int a[], int n){
	int current_sum = 0;
	int max_so_far = 0;

	fo(i,0,n){
		current_sum += a[i];
		if(current_sum < 0){
			current_sum = 0;
		}
		max_so_far = max(current_sum, max_so_far);
	}
	return max_so_far;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif
 	int arr[] = {-3, 2, 5, -1, 6, 3, -2,10,-5, 2};
 	int n = sizeof(arr)/sizeof(int);

 	cout << max_sum(arr, n) <<endl;
 	cout << max_sum_space_opt(arr, n) << " Space Opt" <<endl;
	return 0;
}