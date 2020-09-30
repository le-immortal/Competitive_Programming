#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update>PBDS;

int main(){

#ifndef ONLINE_JUDGE	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	PBDS St;
	long long q,k;
	cin >> q >> k;
	long long x;
	long long x1, y1;
	
	long long dist;
	while(q--){
		cin >>  x;
		switch(x){
			case 1:
					cin >> x1 >> y1;
					dist = x1*x1 + y1*y1;
					St.insert(dist);
					break;
			case 2:
				cout << *St.find_by_order(k-1)<<'\n';
			break;
		}
	}

	

}