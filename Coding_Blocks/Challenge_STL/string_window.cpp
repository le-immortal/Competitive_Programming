#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	
	int n = s1.size(), m = s2.size();

	if(n < m)
		return 0;
	else{
		map<char, int> m1, m2;
		for(char i : s2)
			m2[i]++;
		int l = 0, r = 0;
		int resl = -1, resr = 1e9;
		for(int r = 0; r < n; r++){
			m2[s1[r]]++;
			for(auto i : m1){
				if(m2.find())
			}
		}
		
	}
}