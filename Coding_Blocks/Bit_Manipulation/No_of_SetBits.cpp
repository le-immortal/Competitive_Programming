# include <bits/stdc++.h>
using namespace std;

//Find no of set bits


//First Method 
//Time Complexity = O(logN)
int countBits(int n){
	int count = 0;
	while(n > 0){
		if((n&1) == 1){
			count++;
		}
		n = n >> 1;
	}
	return count;
}

//Second Method
//Time Complexity = O(no of setbits)
int countBitsFast(int n){
	int ans = 0;
	while(n>0){
		n = n & (n-1);
		ans++;
	}
	return ans;
}

//Third Method


int main(){
	int n = 13;
	cout << countBits(n);
	cout << endl << countBitsFast(n);
	cout << endl << __builtin_popcount(n) << endl;

	return 0;
}