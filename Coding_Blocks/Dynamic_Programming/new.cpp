 #include<bits/stdc++.h>
#include<climits>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)

int lis_std(int arr[], int n){
	int dp[n] = {0};
	int res = 0;
	dp[0] = 1;
	fo(i,1,n){
		fo(j,0,i){
			if(arr[j] < arr[i]){
				dp[i] = max(dp[i], dp[j]+1);
			}
		}
	}
	// fo(i,0,n){
	// 	cout << dp[i] << " ";
	// }
	cout << endl;

	fo(i,0,n){
		res = max(res, dp   [i]);
	}

	return res;
}

int lis_tricky(int arr[], int n){
    int dp[n+1] ;
    dp[0] = INT_MIN;
    fo(i,1,n+1){
    	dp[i] = INT_MAX;
    }
    fo(i,0,n){
    	fo(j,0,i+1){
    		// cout << arr[i] << dp[j] << dp[j+1] <<endl;
    		if(arr[i] > dp[j] && arr[i] < dp[j+1]){
    			dp[j+1] = arr[i];
    		}
    	}
    }
    int res;
    fo(i,0,n+1){
    	cout << dp[i] << " ";
    	if(dp[i] != INT_MAX){
    		res = i;
    	}
    }
    cout << endl;
    return res;
}

int lis_optimised(int arr[], int n){
	int dp[n+1] ;
    dp[0] = INT_MIN;
    fo(i,1,n+1){
    	dp[i] = INT_MAX;
    }
    fo(i,0,n){
    	int length = upper_bound(dp, dp+n+1, arr[i])- dp;
    	if(dp[length-1] < arr[i] && arr[i] < dp[length]){
    		dp[length] = arr[i];
    	}
    
    }
    int res;
    fo(i,0,n+1){
    	// cout << dp[i] << " ";
    	if(dp[i] != INT_MAX){
    		res = i;
    	}
    }
    cout << endl;
    return res;
}
 
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {1,5,2,3,4,9,6,10,2,12, 14,3};
	int n = sizeof(arr)/sizeof(int);
	cout << lis_std(arr, n) <<endl;
	cout << lis_tricky(arr, n) <<endl;
 	cout << lis_optimised(arr, n);
 	return 0;
}