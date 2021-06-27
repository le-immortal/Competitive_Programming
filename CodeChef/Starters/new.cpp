#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)
#define pb push_back
#define popb pop_back
#define MOD 1000000007


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll N,Q;
	cin >> N >> Q;
	ll arr[N] = {0};
	fo(i,0,N)
		cin >> arr[i];
	ll Z,L,R,X,Y;
	test(Q){
		cin >> Z;
		switch(Z){
			case 1: cin >> L >> R >> X;
					fo(i, L-1, R){
						ll power = X+i+1-L;
						arr[i] = arr[i] + power*power;
					}
					break;
			case 2:	cin >> Y;
					cout << arr[Y-1	] << endl;
					break;
		}

		}

	return 0;
			
}