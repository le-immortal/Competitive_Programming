#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int N;
    cin>>N;

    string S;
    cin>>S;

    string pat = "ABC";

    int flag = 1,count = 0;

    for(int i = 0; i <= N - 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(S[i+j] != pat[j])
            {
                flag = 0;
                break;
            }
        }

        if(flag)
            count++;
        else
        {
            flag = 1;
        }
    }

    cout<<count<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}