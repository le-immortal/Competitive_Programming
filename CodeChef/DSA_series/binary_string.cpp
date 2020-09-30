#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, a[100], b[100];
	cin >> n;
	a[0] = b[0] =1;
	for(int i = 1;i < n;i++){
		a[i] = a[i-1] + b[i-1];
		b[i] = a[i-1];
	}

	cout << a[n-1]+b[n-1];
}