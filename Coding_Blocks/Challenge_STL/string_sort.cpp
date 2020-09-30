#include<bits/stdc++.h>
using namespace std;

bool compare1(string a, string b){
	if(a.compare(0, b.size(), b) == 0 || b.compare(0, a.size(), a) == 0)
		{
			return a.length()>b.length();
		}
		else
			return a<b;

}

int main(){

#ifndef ONLINE_JUDGE	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	vector<string> v1;
	while(n--){
		string a;
		cin >> a;
		v1.push_back(a);
	}

	sort(v1.begin(), v1.end(), compare1);
		for(string i: v1)
		cout << i << "\n";
}