#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);

    map<char,int> mp;

    for(auto i:s) {
        mp[i]++;
    }

    string n="";
    for(auto i:mp) {
        if(i.second>1) {
            n+=i.first;
            n+=(i.second+'0');
        }
        else{
            n+=i.first;
        }
    }

    cout<<n;
}