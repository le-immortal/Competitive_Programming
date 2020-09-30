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

	int l =0, r;

	map<char, int> m1, m2;
	int resl = -1, resr = 999;
	for(auto x : s2) m2[x]++;

	for(r = 0; r < n; r++){
		m1[s1[r]]++;

		bool good = true;

		for(auto x : m2){
			if(m1.count(x.first) == 0 || m1[x.first] < x.second)
			{good = false;
				break;}
		}

		if(!good) continue;
		while(l < n && l <= r && (m2.count(s1[l]) == 0 || m1[s1[l]] > m2[s1[l]])){
			m1[s1[l]]--;
			if(m1[s1[l]] == 0) m1.erase(s1[l]);
			l++;
		}
		if(r-l+1 < resr - resl +1){
			resr = r;
			resl = l;
		}
	}
	if(resl == -1){
		cout << "No String";
	}
	else{
		cout << s1.substr(resl, resr-resl+1);
	}

}