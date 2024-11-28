#include<bits/stdc++.h>
using namespace std;

int main() {
    string text;
    cin>>text;

    int ans = INT_MAX;
    vector<int> count(26);

    for(auto i:text) {
        count[i-'a']++; //frequency of each alphabet
    }

    for(auto i:string("ban")) {
        ans = min(ans,count[i-'a']);
    }

    for(auto i:string("lo")) {
        ans = min(ans,count[i-'a']/2); //because l and o occur twice
    }

    cout<<ans;
}
