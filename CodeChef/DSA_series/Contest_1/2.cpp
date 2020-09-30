#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        reverse(str.begin(), str.end());
        cout << stoi(str) << endl;
    }
    
}