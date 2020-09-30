#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    long int t;
    cin>>t;
    while(t--)
    {
        long long int pos=-1,n,k,min=10000000000;
        cin>>n>>k;
        long long int arr[n];
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<k && k%arr[i]==0)
            {
                long long int rem=arr[i]/k;
                if(min>rem)
                {
                    min=rem;
                    pos=arr[i];
                }
            }
        }
        cout<<pos<<"\n";
    }
}