#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)
#define pb push_back
#define popb pop_back
#define MOD 1000000007


int firstOcc(int *a, int n, int key){
	if(n == 0)
		return -1;
	if(a[0] == key)
		return 0;
	else{
	int i = firstOcc(a+1, n-1, key);
	if(i == -1)
		return -1;	
		return i+1;	
	}
}

int lastOcc(int *a, int n, int key){
	if(n == 0)
		return -1;

	int i = lastOcc(a+1, n-1, key);
	if(i == -1){
		if(a[0] == key)
			return 0;
		else
			return -1;
	}
	return i+1;
		
}

void allOcc(int *a, int n, int key){
	if(n == 0)
		return;
	else{
		if(a[n-1] == key)
			cout << n-1 << " ";
		return allOcc(a, n-1, key);
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {1,10, 2,3,7,4,5,6,7,10};
	int key = 8;
	int n = sizeof(arr)/sizeof(int);

	cout << firstOcc(arr, n, key) << " " << lastOcc(arr, n, key)<< endl;
	allOcc(arr, n, key);
	return 0;


}	