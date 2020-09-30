#include<bits/stdc++.h>
using namespace std;


int main(){

#ifndef ONLINE_JUDGE	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	priority_queue<long long> pq;
	long long q,k;
	cin >> q >> k;
	long long x;
	long long x1, y1;
	long long count = 0;
	long long dist;
	while(q--){
		cin >>  x;
		switch(x){
			case 1:
					cin >> x1 >> y1;
					dist = x1*x1 + y1*y1;
					pq.push(dist);
					count ++;
					break;
			case 2:
				for(int i = count ; i > k; i--,count--)
					pq.pop();
				cout << pq.top() << '\n';
				
			break;
		}
	}
}