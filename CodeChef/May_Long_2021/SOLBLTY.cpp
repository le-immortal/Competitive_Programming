#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)
 
int main(){
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt","r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif	
	int t,x,a,b;
	cin >> t;
	test(t){	
		cin>> x>> a>> b;
		cout << (a + (100-x)*b)*10 <<endl;
	}

	return 0;
}