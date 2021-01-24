# include <bits/stdc++.h>
using namespace std;
#define ll long long

//Find the 2 unique number from the set of integers(All
// Numbers repeat twice except 2 numbers)

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	 cin >> n;

	int no;
	int res = 0;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>no;
		arr[i] = no;
		res = res^no;
	}

	int temp = res;
	int pos = 0;
	while((temp & 1) != 1){
		pos++;
		temp = temp>>1;
	}

	//First set bit is at position pos
	int mask = 1 << pos;
	int a=0;
	int b=0;
	for(int i = 0; i < n; i++){
		if((mask & arr[i])> 0){
			a=a^arr[i];
		}
	}
	b = res^a;
	cout << a << " " << b;


	return 0;
}