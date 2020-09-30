#include<bits/stdc++.h>
using namespace std;

void computeLPS(int lps[], string pat, int pl){
	int i = 1;
	lps[i] = 0;
	int len =0;
	while(i < pl){
		if(pat[i] == pat[i-1]){
			lps[i] = len++;
			i++;
		}
		else{
			if(len != 0){
				len = lps[len-1];
			}
			else{
				lps[i] = 0;
				i++;
			}
		}
	}
}

void KMPsearch(string text, string pat){
 	int pl = pat.length();
 	int tl = text.length();
 	int lps[pl];
 	computeLPS(lps, pat, pl);

 	int i =0;
 	int j =0;
 	while(i < tl){
 		if(pat[j] == text[i]){
 			j++;
 			i++;
 		}
 		if(j == pl){
 			cout << "Pattern at "<< i-j;
 			j = lps[j-1];
 		}
 		else if(i < tl && pat[j] != text [i]){
 			if(j!=0)
 				j = lps[j-1];
 			else
 				i++;
 		}
 	}
}



int main(){
	string text = "ABABDABACDABABCABAB";
	string pat = "ABABCABAB";
	KMPsearch(text, pat);
}