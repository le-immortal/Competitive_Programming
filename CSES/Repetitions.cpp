#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	string str;
	cin >> str;
	ll max;

	max = 1;
	ll count = 1;
	for(int i = 0; i < str.length();i++){
		count = 1;
		while(str[i] == str[i+1]){
			count ++;
			i++;
		}
		if(count > max)
			max = count;
	}
	cout << max;
}