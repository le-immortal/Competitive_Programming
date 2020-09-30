#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int solve()
{

	string str, pat;
	cin >> str >> pat;
	
	int as[26] = {0};
	int ap[26] = {0};
	for(int i =0; i < pat.length(); i++){
		ap[pat[i]-'a']++;
	}

	for(int i = 0; i < str.length(); i++){
		if(ap[str[i]-'a']!=0){
			ap[str[i]-'a']--;
		}
		else{
			as[str[i]-'a']++;
		}
	}
	string res = "";
	
	int i = 0;
	for(; i < 26 ; i++){
		if (i == pat[0]-'a'){
			break;
		}  
		// if(as[i] != 0){
		// 	for(int j =0; j < as[i]; j++)    
		// 		res = res + (char)(i+'a');
		// }
	}
 	for(int j =0; j < i; j++){
 		if(as[j]!=0){
 			
 		}
 	}

	string s1 = res;
	string s2 = res;
	s1 = res + pat;
	int k = i;
	for(; i < 26; i++){
		if(as[i]!=0){
			for(int j =0; j < as[i]; j++)
				s1 = s1 + (char)(i+'a')	;
		}
	}
	for(int j = 0; j < as[k]; j++)
			s2 = s2+(char)(k+'a');
		s2 += pat;
		k++;

	for(; k < 26; k++){
		if(as[k]!=0){
			for(int j =0; j < as[k]; j++)
				s2 = s2 + (char)(k+'a')	;
		}
	}

	

	cout << (s1.compare(s2) <= 0 ? s1 : s2 ) << endl;
}



int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);


	int T;
	cin>>T;
	while(T--)
		solve(); 

	    
	return 0;
}