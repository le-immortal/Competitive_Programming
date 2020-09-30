#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<pair<int, int> , null_type, less<pair<int , int>>, rb_tree_tag, tree_order_statistics_node_update>PBDS;

int main(){
    PBDS St;
    St.insert({15,0});
    St.insert({3,1});
    St.insert({4,2});
    St.insert({5,3});
    St.insert({15,4});
    St.insert({1,5});

    for(int i =0; i < St.size(); i++){
        cout << i << " " << St.find_by_order(i)->first << "\n";
    }

    //  cout << St.order_of_key(6)->first << endl;
}