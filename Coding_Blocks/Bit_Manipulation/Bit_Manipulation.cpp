# include <bits/stdc++.h>
using namespace std;

int oddeven(int n){
	return (n & 1);
}

int getbit(int a, int i){
	int mask =  1 << i;
	int res = (a & mask) > 0 ? 1 : 0;
	return res;
}

int setbit(int a, int i){
	int mask = 1 << i;
	return a | mask;
}

int clearbit(int a, int i){
	int mask = ~( 1 << i);
	return a & mask;
}

int updatebit(int a, int i, int v){
	int res = clearbit(a, i);
	int mask = v << i;
	return res | mask;
}

int clearRange(int a, int i){
	int mask = -1 << i;
	return a & mask;
}

int clearRangeItoJ(int a, int i, int j){
	int mask = (-1 << (j+1)) | ((1 << i) - 1);
	return a & mask;
}
int setNumber(int N, int M, int i, int j){
	int N1 = clearRangeItoJ(N, i, j);
	return N1 | (M << i);
}
int main(){

	cout << oddeven(5) << endl;
	cout << oddeven(2) << endl;
	cout << getbit(5, 1) << endl;
	cout << getbit(5, 0) << endl;
	cout << setbit(5, 1) << endl;
	cout << clearbit(5, 0) << endl;
	cout << updatebit(5,1,1) <<endl; 
	cout << clearRange(30, 3) << endl;
	cout << clearRangeItoJ(31, 1, 3) << endl;
//Add a number in another number
//N = 1000000 M = 101 i = 2 j = 5 ans = 1010100
	cout << setNumber(64, 5, 2, 4)<<endl;
}