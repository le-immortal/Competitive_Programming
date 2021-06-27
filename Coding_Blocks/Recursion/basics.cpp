#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)
#define pb push_back
#define popb pop_back
#define MOD 1000000007

bool isSorted(int arr[], int n){
	if(n == 1 || n == 0)
		return true;
	else{
		return (arr[0] < arr[1]) && isSorted(arr+1, n-1);
	}
}

int binarySearch(int arr[], int key, int r, int l){
	if(arr[(l+r)/2] == key){
		return (l+r)/2;
	}
	if(r>=l)
		return -1;
	int mid = (l+r)/2;
	if(arr[mid] < key)
		return binarySearch(arr, key, r+1, l);
	else
		return binarySearch(arr, key, r, l-1);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {1,2,3,4,5, 6};
	int n = sizeof(arr)/ sizeof(int);

	cout << isSorted(arr, n) << endl;
	cout << binarySearch(arr, i, 0, n);

	return 0;
}	