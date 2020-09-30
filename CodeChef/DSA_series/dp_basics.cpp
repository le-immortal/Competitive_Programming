//4 1
//1 3 2 9
//7
//Total number of subarrays with sum less than K and a[i]<a[i+1]<.... 
#include<bits/stdc++.h>
using namespace std;
const int s = 1e+5;

int arr[s], N, K;
int func;
bool mem[s];
int dp[s];

int f(int x){
	func++;
	int res = 0;
	res = 1;
	if(mem[x] == true)
		return dp[x];
	for(int i = 0; i < N; i++){
		if(arr[i] > arr[x] && (arr[i] - arr[x] <= K))
			{	mem[i] = true;
				res += f(i);
			}
		func++;
	}
	return dp[x] = res;

}


int main(){
	
	cin>>N>>K;

	for(int i = 0; i < N; i++)cin>>arr[i];
	for(int i = 0; i < N; i++)mem[i] = false;

	int res;
	for(int i = 0; i < N; i++){
		res += f(i);
	}
	cout<<res<<endl<<func;
}