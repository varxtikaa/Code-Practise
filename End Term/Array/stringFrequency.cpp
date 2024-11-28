#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;

    map<char,int> mp;

    for(auto i:s) {
        mp[i]++;
    }
    vector<int> v;
    char ch;
    int max = INT_MIN;
    for(auto i:mp) {
        if(i.second > max) {
            max = i.second;
            ch = i.first;
        }
    }

    cout<<ch;
}