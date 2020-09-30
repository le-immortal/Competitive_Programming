#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int solve()
{
	ll N, K;
	cin >> N >> K;
	int min = INT_MAX;
	ll pos = 0;
	while(N--){
		ll P;
		cin >> P;
		if(K%P != 0)
			continue;
		else{
			int l = (int) K/P;
			if(l < min){
				min = l;
				pos = P;
			}
		}
	}
	pos = (int)pos;
	if(min == INT_MAX)
		return -1;
	else 
		return pos;

}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);


	int T;
	cin>>T;

	while(T--)
		cout << solve() << endl;

	return 0;
}