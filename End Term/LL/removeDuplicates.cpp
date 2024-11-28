#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int ele;
    while(ele != -1) {
        cin>>ele;
        v.push_back(ele);
    }

    v.pop_back();

    map<int,int> mp;
    for(auto i:v) {
        mp[i]++;
    }

    vector<int> duplicates;


    //for sorted Linked List
    for(auto i:mp) {
        duplicates.push_back(i.first);
    }

    duplicates.push_back(-1);

    for(auto i:duplicates) {
        cout<<i<<" ";

    }
}