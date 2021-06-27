#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)
#define pb push_back
#define popb pop_back
#define MOD 1000000007

int power(int a, int n){
 	if(n == 0)
 		return 1;
 	else
 		return a*power(a, n-1);
}

int fast_power(int a, int n){
	if(n == 0)
		return 1;
	 int sub = fast_power(a, n/2);
	 sub *= sub;
	 if( n & 1){
	 	return sub*a;
	 }
	 return sub;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a,n;
	cin >> a >> n;

	cout << fast_power(a, n) << endl;

	return 0;


}	