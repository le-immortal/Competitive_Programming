#include <bits/stdc++.h>
using namespace std;

int main(){
	int K, X;

	cin >> K >> X;

	bool ans = X > K*500;

	if(ans)
		cout << "No";
	else
		cout << "Yes";

}
