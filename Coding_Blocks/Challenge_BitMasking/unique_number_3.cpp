#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	int a = 0;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		int b;
		cin >> b;
		arr[i] = b;
		a = a ^ b; 
	}
	int temp = a;
	int pos = 0;
	while((temp&1)!=1){
		pos++;
		temp = temp >> 1;
	}
	int mask = 1 << pos;
	int f=0;
	for(int i = 0; i < n; i++){
		if((arr[i]&mask)>0){
			f = f^arr[i];
		}
	}
	a = a ^ f;
	cout << min(a,f) <<" " << max(a,f);

	
	return 0;
}