#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)
#define pb push_back
#define popb pop_back
#define MOD 1000000007

int stringToInt(char *a, int n){
	if(n == 0)
		return 0;
	int digit = a[n-1] -'0';
	int small_ans = stringToInt(a, n-1);

	return small_ans*10 + digit;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char a[] = "1234";
	int len = strlen(a);
	
	cout << stringToInt(a,len);

	return 0;


}	