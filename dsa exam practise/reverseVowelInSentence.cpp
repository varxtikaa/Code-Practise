#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;

    vector<int> vowelIndex;
    string v="aeiouAEIOU";

    for(int i=0;i<s.size();i++) {
        if(v.find(s[i]) != string::npos) {
            vowelIndex.push_back(i);
        }
    }

    int left = 0;
    int right = s.size();

    while(left < right) {
        swap(s[vowelIndex[left++]],s[vowelIndex[right--]]);
    }

    for(auto i:s) {
        cout<<i;
    }
}