# include <bits/stdc++.h>
using namespace std;
#define ll long long

// Find all subsequences of the string

void filterChars(int n, char a[]){
	int j =0;
	while(n>0){
		if((n&1) == 1){
			cout << a[j];
		}
		j++;
		n = n >> 1;
	}
	cout << endl;
}

void printSubsets(char a[]){
	int n = strlen(a);
	for(int i = 0; i < (1 << n); i++){
		filterChars(i, a);
	}
}

int main(){

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif


	char a[100];

	cin >> a;
	printSubsets(a);
	return 0;
}