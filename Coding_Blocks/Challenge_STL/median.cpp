#include<bits/stdc++.h>
using namespace std;


int main(){

#ifndef ONLINE_JUDGE	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	vector<int> v1, v2;
	v1.reserve(n);
	v2.reserve(n);
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v1.push_back(x);
	}
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v2.push_back(x);
	}
	int i,j,ans;
	i=0;
	j=0;
	int k =0;
	while(k != n){
		if(v1[i]>v2[j]){
			ans = v2[j];
			j++;
		}
		else{
			ans = v1[i];
			i++;
		}
		k++;
	}
	cout << ans;

}