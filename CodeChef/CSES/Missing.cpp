#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){

	ll N;
	cin >> N;
	ll sum = N*(1+N)/2;
	for(int i = 0; i < N-1; i++){
		int k;
		cin >> k;
		sum-=k;
	}
	cout << sum;


}