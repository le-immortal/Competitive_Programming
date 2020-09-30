#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin >> str;
	int n = str.length();
	{
		for(int i = 0; i < str.length(); i++){
			 int count = 1;
			while(i < str.length()-1 && str[i] == str[i+1]){
				count++;
				str.erase(str.begin()+i+1);
			}
			str.insert(i+1, to_string(count));
			i++;
		}
		if(str.length() <= n) {cout << str;}	
		else
			return 0;
	}
}