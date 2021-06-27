#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)
#define MOD 1000000007
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    int T, N;
    string s;
    cin >> T;
    test(T){
    	cin >> N;
    	cin >> s;
    	if(N&1){
    		if(__builtin_popcount(N) ==1)
    			cout << 0;
    		else
    			cout << (__builtin_popcount(N)-1) <<endl;
    	}
    	else{
    	int same= 0, nosame=0;
    	if(__builtin_popcount(N) ==1){

    			cout << 0;
    			break;
    	}
    	for(int i =0; i < N/2;i++){
    		if(s[i] == s[i+N/2])
    			same++;
    		else 
    			nosame++;
    	}
    	cout << nosame <<endl;
    	}
    }
	return 0;
}