#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<string> v;
    int n;
    cin>>n;

    for(int i=0 ; i<n ; i++) {
        string s;
        cin>>s;
        v.push_back(s);
    }

    string p = v[0];

    for(auto i:v) {
        while(i.find(p) != 0) {
            p = p.substr(0,p.size()-1);
        }
    }

    cout<<p;
}

