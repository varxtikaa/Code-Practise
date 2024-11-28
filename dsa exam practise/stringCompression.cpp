#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    map<char,int> count;

    for(auto i:s) {
        count[i]++;
    }

    string newString;
    for(auto i:count){
        // cout<<i.first<<i.second;
        newString+=i.first;
        newString+=(i.second+'0');
    }

    cout<<newString;
}