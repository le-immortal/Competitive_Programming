#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)
#define pb push_back
#define popb pop_back
#define MOD 1000000007

bool cmp(pair<string, int>& a,
         pair<string, int>& b)
{
    return a.second < b.second;
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int T,N, c;
	cin >> T;
	map <string, int> m;
	string str;
	test(T){
		cin >> N;
		fo(i,0,3)
			fo(i,0,N){
				cin >> str >> c;
				// cout << str << c;
				m[str] +=c;
			}
		vector <pair <string, int>>A;
		for(auto i: m){
			A.pb(i);
		}
		sort(A.begin(), A.end(), cmp);
		m.clear();
		for(auto i : A){
			cout << i.second << " ";
		}
		cout << endl;
	}


	return 0;
			
}