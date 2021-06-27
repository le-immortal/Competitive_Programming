#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)
 
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int T, x1,x2, y1, y2,z1,z2;
	cin >> T;
	test(T){
		cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
		if((x2>=x1) && (y2>=y1) && (z2<=z1)){
			cout << "YES" <<"\n";
		}
		else{
			cout << "NO" <<"\n";
		}
	}
	return 0;
}