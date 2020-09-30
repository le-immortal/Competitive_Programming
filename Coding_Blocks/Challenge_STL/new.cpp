#include <bits/stdc++.h>
using namespace std;
bool IsSorted(int a[],int n){
    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1]){
            return false;
        }
    }
    return true;
}
int main() {
	#ifndef ONLINE_JUDGE	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
    int n,k,a[100000];
    cin>>n>>k;
    map<int,int>m;
    map<int,int> :: iterator it;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]=i;
    }
    int ind=0;
    int start=n;
    while(k>0){
        int x=m[start];
        int y=a[ind];
        if(x!=ind){
            swap(a[x],a[ind]);
            m[start]=ind;
            m[y]=x;
            k--;
        }
        else if(x==ind){
            bool issort=IsSorted(a,n);
            if(issort)break;
        }
        start--;
        ind++;
    }
  // cout<<a[3]<<" ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
  //  cout<<a[3];
}
